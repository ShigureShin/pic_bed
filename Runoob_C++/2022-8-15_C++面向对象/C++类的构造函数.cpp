#include <iostream>
using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        // Line(); // 构造函数
        Line(double len);
    
    private:
        double length;
};

/* 一般写法 */
// Line::Line(double len)
// {
//     cout << "Object is being created, length= " << len <<endl;
//     length = len;
// }
/* 初始化列表来初始化字段*/
Line::Line(double len): length(len)
{
    cout << "Object is being created, length= " << len <<endl;
}
// C::C( double a, double b, double c): X(a), Y(b), Z(c)
// {
//   ....
// }

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
    Line line(10.0); // 需要传给构造函数参数

    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}

// 输出
// >>Object is being created
// >>Length of line : 6