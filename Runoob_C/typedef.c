// typedef unsigned char BYTE;
// 标识BYTE可作为类型unsigned char的缩写
// 按照管理定义时会使用大写字母
#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Book;

int main()
{
    Book book;

    strcpy(book.title, "C教程");
    strcpy(book.author, "Runoob");
    strcpy(book.subject, "编程语言");
    book.book_id = 12345;

    printf("书标题： %s\n", book.title);
    printf("书作者: %s\n", book.author);
    printf("书类目: %s\n", book.subject);
    printf("书ID: %d\n", book.book_id);

    return 0;
}

// #define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：

// typedef 仅限于为类型定义符号名称；#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
// typedef 是由编译器执行解释的；#define 语句是由预编译器进行处理的。