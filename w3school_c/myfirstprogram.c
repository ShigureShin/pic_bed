#include <stdio.h>

int main(){
    int myNum = 15;
    int myOtherNum = 23;

    // Assign the value of myOtherNum(23) to myNum
    myNum = myOtherNum;
    printf("myNum = %d\n", myNum);

    myOtherNum = 55;
    // wont change the value of myNum
    printf("myNum = %d\n", myNum);

    return 0;
}
