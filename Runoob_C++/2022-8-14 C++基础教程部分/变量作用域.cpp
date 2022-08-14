/*
    - 在函数或一个代码块内部声明的变量，局部变量
    - 在函数参数的定义中声明的变量，形式参数
    - 在所有函数外部声明的变量，全局变量
*/
#include <iostream>
using namespace std;

// 全局变量
int g;
// 全局变量会被自动初始化
/*
    int -> 0
    char -> '\0'
    float -> 0
    double -> 0
    pointer -> NULL
*/

int main()
{
    // 局部变量
    int a, b;
    int c;
    // 函数内部，局部变量的值会覆盖名字相同的全局变量的值
    return 0;
}