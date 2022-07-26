#include <stdio.h>

// 函数外定义变量x和y
int x;
int y;
int addtownum()
{
    //函数内声明变量x和y为外部变量
    extern int x;
    extern int y;
    //给外部变量（全局变量）x和y赋值
    x = 1;
    y = 2;

    return x+y;
}

int main()
{
    int result;
    // 调用函数 addtwonum
    result = addtownum();

    printf("result is : %d", result);

    return 0;
}


// 不带初始化的定义：带有静态存储持续时间的变量会被隐式初始化为NULL
// 所有字节都是0，其他所有变量都是未定义的。

// int a 声明，也是定义
// 在声明时就已经建立了存储空间
// extern声明变量名而不定义它
// extern int a 声明，但不是定义
// 其中a可以在别的文件中定义
// 除非有extern关键字，否则都是变量的定义