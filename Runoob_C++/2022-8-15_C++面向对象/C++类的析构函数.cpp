// 析构函数的名称与类的名称是完全相同的，只是在前边加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
#include <iostream>
using namespace std;
class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line(); // 构造函数声明
        ~Line(); // 析构函数声明

    private:
        double length;
};
// 成员函数定义（包括构造函数）
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line;

    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}