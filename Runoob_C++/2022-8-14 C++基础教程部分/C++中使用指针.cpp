#include <iostream>
using namespace std;
int main()
{
    int var = 20;
    int *ip;

    ip = &var;

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip vairable: ";
    cout << ip << endl;

    // 访问之阵中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}