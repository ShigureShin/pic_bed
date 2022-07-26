#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
// 占用8个字节
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
// 占用4个字节，但是只有2位用来存储值
// 如果使用32个变量，每个变量宽度为1位，则status结构使用4个字节，1个字节为8位
// 当33个变量，则将分配内存的下一段来存储第33个变量，即使用8个字节
struct 
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
}status2;

int main()
{
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
    printf("Memory size occupied by status2: %d\n", sizeof(status2));

    return 0;
}
// 位域列表的形式：
// type [member_name] : width;
// type只能是int、unsigned int、signed int三种类型
// width：位域中位的数量，宽度必须小于或等于指定类型的位宽度
