#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isFishTasty);

    int time = 22;
    if (time < 10){
        printf("Good morning.\n");
    } else if (time < 20){
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    };

    if (time < 18){
        printf("Good day.\n");
    } else{
        printf("Good evening.\n");
    };

    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n");

    return 0;
}