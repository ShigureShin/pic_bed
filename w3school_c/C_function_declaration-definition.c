#include <stdio.h>

// Function declaration
void myFunction();
int math_plus(int, int);

// The main method
int main(){
    myFunction(); // call the function
    
    int result;
    result = math_plus(5, 3);
    printf("Result is = %d", result);
    return 0;
}

void myFunction(){
    printf("I just go executed!\n");
}

int math_plus(int x, int y){
    return x+y;
}