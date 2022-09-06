// 结构：C++中另一种用户自定义的可用的数据类型，允许存储不同类型的数据项
// struct type_name{
//     member_type1 member_name1;
//     ...
// }object_names;
// type_name: 结构体类型的名称

#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Books *book);

// typedef struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
// }Books;
// 利用typedef 将Books来定义Books类型的变量而不需要使用struct关键字

// 声明一个结构体类型Books
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    Books Book1;
    Books Book2;

    strcpy(Book1.title, "C++");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "Programming");
    Book1.book_id = 12345;

    strcpy(Book2.title, "CSS");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "Front-end");
    Book2.book_id = 12346;

    printBook(&Book1);
    printBook(&Book2);
    
    return 0;
}

// void printBook(struct Books book)
// {
//     cout << "Title: " << book.title << endl;
//     cout << "Author: " << book.author << endl;
//     cout << "Subject: " << book.subject << endl;
//     cout << "Book_ID: " << book.book_id << endl;
// }

/* 指向结构的指针 */
void printBook(struct Books *book)
{
    cout << "Title: " << book->title << endl;
     cout << "Author: " << book->author << endl;
     cout << "Subject: " << book->subject << endl;
     cout << "Book_ID: " << book->book_id << endl;
}