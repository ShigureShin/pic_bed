//
// Created by Shin on 2023/10/24.
//

#ifndef CLION_C_MULTIPLICATION_TABLE_H
#define CLION_C_MULTIPLICATION_TABLE_H

#include <stdio.h>
#include <math.h>

void print_multiplication(){

    for (int i = 1; i < 10; i++){
        for (int j = 1; j <= i; j++){
            int k = i * j;
            printf("%d * %d = %d ", i,j,k);
        }
        printf("\n");
    }



}

#endif //CLION_C_MULTIPLICATION_TABLE_H
