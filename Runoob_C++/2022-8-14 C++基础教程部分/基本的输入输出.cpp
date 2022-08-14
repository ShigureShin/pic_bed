// I/O库头文件
// <iostream> 定义了cin、cout、cerr和clog对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流

/* 标准输出流(cout) */
// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[] = "Hello C++";
//     cout << "Value of str is : " << str << endl;
// }

/* 标准输入流（cin）*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     char name[50];
//     int age;
//     cout << "Plz input your name: ";
//     // cin >> name;
//     cin >> name >> age; // 一次性输入多个数据，等同于cin>>name; cin>>age;
//     cout << "Your name is : " << name << endl;
// }

/* 标准错误流 */
// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[] = "Unable to read....";
//     cerr << "Error message: " << str << endl;
// }

/* 标准日志流（clog）*/
#include <iostream>
using namespace std;
int main()
{
    char str[] = "Unable to read....";
    clog << "Error message : " << str << endl;
}
// <iomanip> 通过所谓的参数化的流操纵器（如setw和setprecision），来声明对执行标准化I/O有用的服务

// <fstream> 为用户控制的文件处理声明服务