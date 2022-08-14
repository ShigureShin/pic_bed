#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    // 把now转换为字符串形式
    char* dt = ctime(&now);

    cout << "Data Time:" << dt << endl;

    // 把now转换为tm结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC data time: " << dt << endl;

}