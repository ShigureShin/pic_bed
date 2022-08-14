#include <iostream>

using namespace std;

void swap(int& x, int& y);

int main()
{
    int i;
    double d;

    int& r = i;
    double& s = d;

    // i = 5;
    // cout << "Value of i: " << i << endl;
    // cout << "Value of i reference: " << r << endl;

    // d = 11.7;
    // cout << "Value of d: " << d << endl;
    // cout << "Value of d reference: " << s << endl;

    int a = 100;
    int b = 200;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return ;
}