# 问题：`control reaches end of non-void function [-Wreturn-type]`

## 起因

- 在学习C++类模板的非类型参数时，有以下例子（利用类模板的非类型参数，创建动态数组）

```cpp
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

template<typename T, int N>
class Array{
public:
    Array();
    ~Array();
public:
    T & operator[](int i);  //重载下标运算符[]
    int length() const { return m_length; }  //获取数组长度
    bool capacity(int n);  //改变数组容量
private:
    int m_length;  //数组的当前长度
    int m_capacity;  //当前内存的容量（能容乃的元素的个数）
    T *m_p;  //指向数组内存的指针
};

template<typename T, int N>
Array<T, N>::Array(){
    m_p = new T[N];
    m_capacity = m_length = N;
}

template<typename T, int N>
Array<T, N>::~Array(){
    delete[] m_p;
}

template<typename T, int N>
T & Array<T, N>::operator[](int i){
    if(i<0 || i>=m_length){
        cout<<"Exception: Array index out of bounds!"<<endl;
    }
    return m_p[i];
}

template<typename T, int N>
bool Array<T, N>::capacity(int n){
    if(n > 0){  //增大数组
        int len = m_length + n;  //增大后的数组长度
        if(len <= m_capacity){  //现有内存足以容纳增大后的数组
            m_length = len;
            return true;
        }else{  //现有内存不能容纳增大后的数组
            T *pTemp = new T[m_length + 2 * n * sizeof(T)];  //增加的内存足以容纳 2*n 个元素
            if(pTemp == NULL){  //内存分配失败
                cout<<"Exception: Failed to allocate memory!"<<endl;
                return false;
            }else{  //内存分配成功
                memcpy( pTemp, m_p, m_length*sizeof(T) );
                delete[] m_p;
                m_p = pTemp;
                m_capacity = m_length = len;
            }
        }
    }else{  //收缩数组
        int len = m_length - abs(n);  //收缩后的数组长度
        if(len < 0){
            cout<<"Exception: Array length is too small!"<<endl;
            return false;
        }else{
            m_length = len;
            return true;
        }
    }
}


int main(){
    Array<int, 5> arr;

    //为数组元素赋值
    for(int i=0, len=arr.length(); i<len; i++){
        arr[i] = 2*i;
    }
   
    //第一次打印数组
    for(int i=0, len=arr.length(); i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   

    //扩大容量并为增加的元素赋值
    arr.capacity(8);
    for(int i=5, len=arr.length(); i<len; i++){
        arr[i] = 2*i;
    }

    //第二次打印数组
    for(int i=0, len=arr.length(); i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //收缩容量
    arr.capacity(-4);

    //第三次打印数组
    for(int i=0, len=arr.length(); i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
```

- 编译运行出现报错

```cpp
control reaches end of non-void function [-Wreturn-type]
```

## 解决方式

- 在函数 `Array.capacity()` 中某个条件语句下缺少返回值
	- 第19行，增加 `return true;`
- 再次运行，成功，无报错

```cpp
template<typename T, int N>
bool Array<T, N>::capacity(int n){
    if(n > 0){  //增大数组
        int len = m_length + n;  //增大后的数组长度
        if(len <= m_capacity){  //现有内存足以容纳增大后的数组
            m_length = len;
            return true;
        }else{  //现有内存不能容纳增大后的数组
            T *pTemp = new T[m_length + 2 * n * sizeof(T)];  //增加的内存足以容纳 2*n 个元素
            if(pTemp == NULL){  //内存分配失败
                cout<<"Exception: Failed to allocate memory!"<<endl;
                return false;
            }else{  //内存分配成功
                memcpy( pTemp, m_p, m_length*sizeof(T) );
                delete[] m_p;
                m_p = pTemp;
                m_capacity = m_length = len;
            // 这里没有返回值
	            return true;
            }
        }
    }else{  //收缩数组
        int len = m_length - abs(n);  //收缩后的数组长度
        if(len < 0){
            cout<<"Exception: Array length is too small!"<<endl;
            return false;
        }else{
            m_length = len;
            return true;
        }
    }
}
```

## 原因分析

```cpp
warning: control reaches end of non-void function
```

- 意思是：控制到达非void函数的结尾。
- 本该有返回值的函数到达结尾后并没有返回任何值
- 经检查，发现在类模板的成员函数 `template<typename T, int N> bool Array<T, N>::capacity(int n){}` 中的某个条件语句下，缺少返回值
- 添加返回语句后，编译运行成功


## 参考链接

- [# c++编译报warning: control reaches end of non-void function](https://blog.csdn.net/suibianshen2012/article/details/52247957)
