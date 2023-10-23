#include <stdio.h>

int main(){

    int myNumbers[4] = {25, 50, 75, 100};

    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);

    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers+1));
    printf("%d\n", *(myNumbers+2));

    int *ptr = myNumbers;
    int i;
    printf("For loop with pointer:\n");
    for (i = 0; i < 4; i++){
        printf("%d\n", *(ptr+i));
    }
    *myNumbers = 13; // Change the value of the first element to 13
    printf("First element changes to %d\n", *myNumbers);

    return 0;
}