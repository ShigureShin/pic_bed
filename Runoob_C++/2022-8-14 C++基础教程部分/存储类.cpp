/*
    存储类定义程序中变量/函数的范围（可见性）和生命周期
    - auto (C++ 17开始不再是存储类说明符)
    - register (C++ 17开始被弃用)
    - static
    - extern
    - mutable
    - thread_local(C++11)
*/

// static 存储类
/*
    指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
    使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
    当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
*/
#include <iostream>
void func(void);
static int count = 10; /* 全局变量 */
int main()
{
    while(count--)
    {
        func();
    }
    return 0;
}
void func(void)
{
    static int i=5; // 局部静态变量
    i++;
    std::cout << "variable i is " << i;
    std::cout << ", variable count is " << count << std::endl;
}