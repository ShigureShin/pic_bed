#include <iostream>
using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
double& setValues(int i)
{
    double& ref = vals[i];
    return ref; // 返回第i个元素的引用
}
int main()
{
    cout << "Origin value: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << "vals[" << i << "]= ";
        cout << vals[i] << endl;
    }
    setValues(1) = 20.23; // vals[1] = 20.23
    setValues(3) = 70.8;

    cout << "Changed value: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << "vals[" << i << "]=";
        cout << vals[i] << endl;
    }
    return 0;
}