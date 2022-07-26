// ++ -- + -
// 假设ptr位一个指向地址1000的整型指针，是一个32位整数
// 进行 ptr++;
// 上述运算执行完毕后，ptr将指向位置1004
// 因为ptr每增加一次，它都将指向下一个证书位置，即当前位置往后移4字节
// 指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度，比如int为4个字节

/* 递增一个指针 */
// #include <stdio.h>
// const int MAX = 3;
// int main()
// {
//     int var[] = {10, 100, 200};
//     int i, *ptr;

//     /* 指针中的数组地址 */
//     ptr = var;
//     for (i=0; i<MAX; i++)
//     {
//         printf("storage address: var[%d] = %p\n", i, ptr);
//         printf("storage value: var[%d] = %d\n", i, ptr);

//         /* 指向下一个位置 */
//         ptr++;
//     }
//     return 0;
// }

/* 递减一个指针 */
// #include <stdio.h>
// const int MAX=3;
// int main()
// {
//     int var[] = {10, 100, 200};
//     int i, *ptr;
//     /* 指针中最后一个元素的地址 */
//     ptr = &var[MAX-1];
//     for (i=MAX;i>0;i--)
//     {
//         printf("storage address: var[%d] = %p\n", i-1, ptr);
//         printf("storage value: var[%d] = %d\n", i-1, *ptr);

//         /* 指向上一个位置 */
//         ptr--;
//     }
//     return 0;
// }

/* 指针的比较 */
// ==、<、>
// 如果p1和p2指向两个相关的变量，比如同一个数组中不同的元素
// 则对p1和p2进行大小比较。
// 只要变量指针所指向的地址小于或等于数组的最后一个元素的地址 
// &var[MAX - 1]，则把变量指针进行递增
#include <stdio.h>
const int MAX = 3;
int main()
{
    int var[] = {10, 100, 200};
    int i, *ptr;
    /* 指针中第一个元素的地址 */
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX-1])
    {
        printf("storage address: var[%d] = %p\n", i, ptr);
        printf("storage value: var[%d] = %d\n", i, *ptr);
        /* 指向上一个位置 */
        ptr++;
        i++;
    }
    return 0;
}