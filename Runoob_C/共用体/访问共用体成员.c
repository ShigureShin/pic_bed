#include <stdio.h>
#include <string.h>
union Data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union Data data;

    /* i和f的输出值出现损坏，因为最后赋给变量的值占用了内存位置 */
    // data.i = 10;
    // data.f = 220.5;
    // strcpy(data.str, "C Programming");

    // printf("data.i : %d\n", data.i);
    // printf("data.f : %f\n", data.f);
    // printf("data.str : %s\n", data.str);

    /* 但如果一次只输出一个变量 */
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);
    // 此时所有成员都能完好输出，因为同一时间只用到了一个成员

    return 0;
}