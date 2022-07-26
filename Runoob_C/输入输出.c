/* getchar() & putchar() */
// #include <stdio.h>

// int main()
// {
//     int c;

//     printf("Enter a value: ");
//     c = getchar();

//     printf("\nYou entered: ");
//     putchar(c);
//     printf("\n");
    
//     return 0;
// }
// 输入runoob，只会输出r。程序只会读取一个单一的字符


/* gets() & puts() */
// char *gets(char *s) 函数
// 从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
// int puts(const char *s) 函数
// 把字符串 s 和一个尾随的换行符写入到 stdout。
// #include <stdio.h>
// int main()
// {
//     char str[100];

//     printf("Enter a value: ");
//     gets(str);

//     printf("\nYou entered: ");
//     puts(str);

//     return 0;
// }
// 这时会读取一整行直到该行结束

/* scanf() & printf() */
#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d", str, i);
    printf("\n");

    return 0;
}
// scanf() 在读取字符串时，遇到空格就会停止读取，如: this is test,对scanf是三个字符串