#include <iostream>
using namespace std;
int main()
{
    int var1;
    char var2[10];

    cout << "var1 address: ";
    cout << &var1 << endl;

    cout << "var2 address: ";
    cout << &var2 << endl;

    return 0;
}
// type *var-name;
// 所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一不同的是，指针所指向的变量或常量的数据类型不同。