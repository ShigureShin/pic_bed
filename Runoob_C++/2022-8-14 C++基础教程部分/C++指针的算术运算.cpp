#include <iostream>
using namespace std;

const int MAX = 3;
int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // 指针中的数组地址
    // var本身表示的就是数组第一个元素的地址，但无法像指针ptr一样移动位置；静态指向第一个元素
    ptr = var; // 数组中第一个元素的地址
    // ptr = &var[MAX-1]; // 数组中最后一个元素的地址
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "]= ";
        cout << ptr << endl;

        cout << "Variable of var[" << i << "]= ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr ++ ;
    }
    return 0;
}