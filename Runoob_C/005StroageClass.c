/*
    auto:
        {
            int mount;
            auto int month; 
            //上面定义了两个带有相同存储类的变量，
            //auto只能用于函数内，即auto只能修饰局部变量
        }
    register
        // 用于定义存储在寄存器中而不是RAM中的局部变量，
        // 这意味着变量的最大尺寸等于寄存器的大小（通常是一个字）
        // 且不能对它应用一元的“&”运算符（因为没有内存位置）
        {
            register int miles;
        }
        // 只用于需要快速访问的变量，比如计数器。
        // register并不意味着变量将被存储在寄存器中，
        // 而是意味着变量可能存储在寄存器中，取决于硬件和实现的限制
   static
        // 指示编译器在程序的声明周期内保持局部变量的存在，
        // 而不需要每次它进入和离开作用域时进行创建和销毁
        // 因此，使用static修饰局部变量可以在函数调用之间保持局部变量的值

        // 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
        // 全局声明的static变量或方法可以被任何函数或方法调用，只要子啊同一个文件内     
    extern

*/

#include <stdio.h>

/*函数声明*/
void func1(void);

static int count = 10; // 全局变量 - static 是默认的

int main()
{
    while (count--)
    {
        func1();
    }
    return 0;
}

void func1(void)
{
    /* 'thingy' 是 'func1'的局部变量，只初始化一次 */
    /* 每次调用函数时，thingy值不会被重置 */
    static int thingy=5;
    thingy++;
    printf("thingy is %d, count is %d\n", thingy, count);

}