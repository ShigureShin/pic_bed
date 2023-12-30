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
        T & operator[](int i);
        int length() const { return m_length; }
        bool capacity(int n);
    private:
        int m_length;
        int m_capacity;
        T *m_p;
};

template<typename T, int N>
Array<T ,N>::Array(){
    m_p = new T[N];
    m_capacity = m_length = N;
}

template<typename T, int N>
Array<T, N>::~Array(){
    delete [] m_p;
}

template<typename T, int N>
T & Array<T, N>::operator[](int i){
    if(i<0||i>m_length){
        cout << "Exception: Array index out of bounds!" << endl;
    }
    return m_p[i];
}

template<typename T, int N>
bool Array<T, N>::capacity(int n){
    if(n>0){
        int len = m_length + n;
        if (len <= m_capacity){
            m_length = len;
            return true;
        }else{
            T *pTemp = new T[m_length+2*n*sizeof(T)];
            if(pTemp==NULL){
                cout << "Exception: Failed to allocate memory!" << endl;
                return false;
            }else{
                memcpy(pTemp, m_p, m_length*sizeof(T));
                delete [] m_p;
                m_p = pTemp;
                m_capacity = m_length = len;
                return true;
            }
        }
    }else{
        int len = m_length - abs(n);
        if(len<0){
            cout<<"Exception: Array length is too small!" << endl;
            return false;
        }
        else{
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