/* 函数指针 */
// #include <stdio.h>
 
// int max(int x, int y)
// {
//     return x > y ? x : y;
// }
 
// int main(void)
// {
//     /* p 是函数指针 */
//     int (* p)(int, int) = & max; // &可以省略
//     int a, b, c, d;
 
//     printf("请输入三个数字:");
//     scanf("%d %d %d", & a, & b, & c);
 
//     /* 与直接调用函数等价，d = max(max(a, b), c) */
//     d = p(p(a, b), c); 
 
//     printf("最大的数字是: %d\n", d);
 
//     return 0;
// }

/* 回调函数 */
#include <stdlib.h>  
#include <stdio.h>
 
// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}
 
int main(void)
{
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}