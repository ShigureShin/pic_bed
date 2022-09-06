#include <iostream>

using namespace std;

class Box
{
    // public、private、protected 访问修饰符
    // public 公有成员：程序外部可以访问，可以不适用任何成员函数来设置和获取共有变量的值。Box1.length 可以直接访问
    // private 私有成员（默认情况下），只有类和友元函数可以访问
    // protected 受保护成员（与私有成员相似，但有一点不同）受保护成员在派生类（即子类）是可以访问的。
    public:
        double length;
        double breadth;
        double height;

        double get(void);
        void set(double len, double bre, double hei);
};
// 成员函数可以直接定义在类定义内部，或者单独使用范围解析符 :: 来定义。
double Box::get(void)
{
    return length * breadth * height;
}
void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "The volume of Box1: " << volume << endl;

    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "The volume of Box2: " << volume << endl;

    Box3.set(16.0, 8.0, 12.0);
    volume = Box3.get();
    cout << "The volume of Box3: " << volume << endl;

    return 0;
}