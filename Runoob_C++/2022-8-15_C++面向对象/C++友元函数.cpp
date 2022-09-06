// 类的友元函数是定义在类外部，但有权访问类的所有私有成员和保护成员。尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数
// 友元也可以是一个类，这种情况下，整个类及其所有成员都是友元
#include <iostream>
using namespace std;
class Box
{
    double width;

    public:
        friend void printWidth(Box box);
        void setWidth(double wid);
};
void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    /* 因为printWidth() 是Box的友元，它可以直接访问该类的任何成员*/
    // width 默认为私有成员
    cout << "Width of box: " << box.width << endl;
}

int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}