#include <iostream>

using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    // 获取var的地址
    ptr = &var;

    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;

    // pptr 获取值
    cout << "Value of var is : " << var << endl;
    cout << "Value of *ptr is : " << *ptr << endl;
    cout << "Value of **ptr is : " << **pptr << endl;

    return 0;
}