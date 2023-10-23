#include <stdio.h>
#include <string.h>

int main(){

    // // Single input
    // int myNum;

    // printf("Type a number: \n");
    // scanf("%d", &myNum); // &myNum, will store the memory address of the variable

    // printf("Your number is: %d.\n", myNum);

    // Multiple input
    // int myNum2;
    // char myChar;

    // printf("Type a number AND a character and press enter: \n");
    // scanf("%d %c", &myNum2, &myChar);

    // printf("Your number is: %d.\n", myNum2);
    // printf("Your character is: %c.\n", myChar);

    // Use fgets() instead of scanf for string input
    // fgets(), read a line of text
    char fullName[30];
    printf("Type your full name and press enter: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);

    return 0;
}