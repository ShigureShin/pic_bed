/* 预处理器 */
// #define 定义宏
// #include 包含一个源代码文件
// #undef 取消已定义的宏
// #ifdef 如果宏已经定义，则返回真
// #ifndef 如果宏没有定义，则返回真
// #if 如果给定条件为真，则编译下面代码
// #else #if的替代方案
// #elif 
// #endif 结束一个#if...#else 条件编译块
// #error 遇到标准错误时，输出错误消息
// #pragma

// #include <stdio.h>   从系统库中获取 stdio.h，并添加文本到当前的源文件中
// #include "myheader.h" 从本地目录中获取 myheader.h，并添加内容到当前的源文件中。


// #undef  FILE_SIZE
// #define FILE_SIZE 42
//  取消已定义的 FILE_SIZE，并定义它为 42。

/* 只有当 MESSAGE 未定义时，才定义 MESSAGE */
// #ifndef MESSAGE
//   #define MESSAGE "You wish!"
// #endif

/*预定义宏*/

/*预处理器运算符*/

/*参数化的宏*/