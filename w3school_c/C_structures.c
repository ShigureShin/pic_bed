#include <stdio.h>
#include <string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main(){

    struct myStructure s1;

    s1.myNum = 13;
    s1.myLetter = 'B';

    printf("My number is: %d\n", s1.myNum);
    printf("My letter is: %c\n", s1.myLetter);

    // For string type
    // s1.myString = "Some text"; // error: assignment to expression with array type, use strcpy() instead
    strcpy(s1.myString, "Some text");

    printf("My string is: %s\n", s1.myString);
    
    // A simple way to syntax
    // struct myStructure s1 = {13, 'B', "Some text"};

    return 0;
}