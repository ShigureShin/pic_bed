// 拷贝构造函数
// - 通过使用另一个同类型的对象来初始化新创建的对象
// - 复制对象把它作为参数传递给函数
// - 复制对象，并从函数返回这个对象
#include <iostream>
using namespace std;
class Line
{
    public:
        int getLength(void);
        Line(int len);
        Line(const Line&obj); // 拷贝构造函数
        ~Line();
    private:
        int *ptr;
};
Line::Line(int len)
{
    cout << "Call the constructor" << endl;
    ptr = new int;
    *ptr = len;
}
Line::Line(const Line&obj)
{
    cout << "Call the copy constructor and allocate memory for the pointer ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // cpoy
}
Line::~Line(void)
{
    cout << "Free memory" << endl;
    delete ptr;
}
int Line::getLength(void)
{
    return *ptr;
}
void display(Line obj)
{
    cout << "Line size: " << obj.getLength() << endl;
}

int main()
{
    // Line line(10);
    // display(line);
    // return 0;
    // 输出
    // Call the constructor 
    // Call the copy constructor and allocate memory for the pointer ptr
    // Line size: 10
    // Free memory
    // Free memory

    Line line1(10);
    Line line2 = line1; // 这里也调用了拷贝构造函数

    display(line1);
    display(line2);
    return 0;
    // 输出
    // Call the constructor
    // Call the copy constructor and allocate memory for the pointer ptr
    // Call the copy constructor and allocate memory for the pointer ptr Line line2 = line1; 为line2分配的内存
    // Line size: 10
    // Free memory
    // Call the copy constructor and allocate memory for the pointer ptr
    // Line size: 10
    // Free memory
    // Free memory
    // Free memory
}