//
// Created by Shin on 2023/11/4.
//

#ifndef CLION_C_FIBONACCHISEQUENCE_H
#define CLION_C_FIBONACCHISEQUENCE_H

int Fibonacchi(int n){

    if (n == 1 || n == 2){
        return 1;
    }

    return n + Fibonacchi(n-1);
}

#endif //CLION_C_FIBONACCHISEQUENCE_H
