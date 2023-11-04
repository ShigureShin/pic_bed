#include <stdio.h>

int main() {

    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i=0; i<12; i++){
        if (arr[i] < 31){
            arr[i] = 0;
            // printf("Month day > 30: %d\n", i+1);
        }
    }

    for (int i=0; i<12; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
