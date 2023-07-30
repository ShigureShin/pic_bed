#include <iostream>

int main(){

    // pseudo-random = NOT truly random (but close)

    // initialize the random number generator
    srand(time(NULL));
    
    int num = (rand() % 6) + 1; // dice with 6

    std::cout << num;

    return 0;
}