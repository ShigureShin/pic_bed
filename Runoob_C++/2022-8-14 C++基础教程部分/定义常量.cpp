// #define 预处理器 #define identifier value

// const 关键字 const type variable = value;

#include <iostream>
using namespace std;

#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    const int LENGTH = 10;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}

/*
    C++ 中的类型限定符
    // const 类型的对象在程序执行期间不能被改变
    // volatile 告诉编译器不需要优化其声明的变量。（一般的变量，会对变量进行优化，将内存中的变量放在寄存器中以加快读写效率）
    // restrict 修饰的指针是唯一一种访问它所指向的对象的方式。
*/