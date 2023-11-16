
## 问题：warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]

问题描述：使用 `char` 类型指针指向常量字符串能够编译运行，但会弹出警告提示。

### 起因

定义类`Student`
```cpp
class Student{
public:
	char *name;
    void say(){
        std::cout << name << std::endl;
    }
};
```
成员变量`name`为char型指针，当创建对象传入一个字符串时，代码如下：
```cpp
int main(){

	Student stu;
	stu.name = "XiaoMing";
	stu.say();
}
```

运行成功，但弹出警告：

```...C++ forbids converting a string constant to 'char*'...```

### 解决方式

在类的定义中，将成员变量`name`声明修改为常字符指针，即```const char *name;```

再次编译通过

### 原因分析

在创建对象时，`stu.name = "XiaoMing";`

其中字符串 `"XiaoMing"` 是一个字符串常量，存储在常量区，其值是不允许修改的

而 `Student` 类中的  `name` 为一个char类型的指针，如果修改 `p[0]` 就是修改了字符串中的内容，**这个是不允许的**

所以，需要在指针声明前加上 `const` 关键字，来表明指针指向的内容是**不可修改的**

故，修改方案为，在 `Student` 类中，成员变量 `name` 的声明处增加 `const` 关键字，即：

```cpp
const char *name;
```

### 参考链接

- [关于字符串常量指针](https://blog.csdn.net/sinat_22991367/article/details/73410388)
- [常量与指针间的转换 warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]](https://blog.csdn.net/sober0314/article/details/104477425)
