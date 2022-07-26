#include <stdio.h>
#include <stdarg.h>
 
// 函数 func() 最后一个参数写成省略号，即三个点号（...），
// 省略号之前的那个参数是 int，代表了要传递的可变参数的总数。为了使用这个功能，
// 您需要使用 stdarg.h 头文件，该文件提供了实现可变参数功能的函数和宏。
double average(int num,...)
{
    va_list valist; // 
    double sum = 0.0;
    int i;
 
    /* 为 num 个参数初始化 valist */
    va_start(valist, num);
 
    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
       sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);
 
    return sum/num;
}
 
int main()
{
   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
   printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}