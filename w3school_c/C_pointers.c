#include <stdio.h>

int main(){

    int myAge = 24;

    printf("myAge = %d\n", myAge);
    printf("myAge_pointer = %p\n", &myAge);

    // int* ptr = &myAge;
    int *ptr = &myAge;
    printf("ptr = %p\n", ptr);
    printf("ptr points to = %d\n", *ptr);

    return 0;
}