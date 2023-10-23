#include <stdio.h>
#include <math.h>

int main(){

    printf("Narcissitic Number: ");

    for (int i=100; i<1000; i++){

        int a = i / 100, b = (i / 10) % 10, c = i % 10;
        int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

        if (i == sum){
            printf("%d ", i);
        }else{
            continue;
        }

    }

    return 0;
}