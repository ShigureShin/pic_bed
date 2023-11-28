#include <iostream>

void walk_iterative(int steps);
void walk_recursion(int steps);
int factorial(int num);

int main(){

    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and its cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    // walk_iterative(100);
    // walk_recursion(100);

    std::cout << factorial(5);

    return 0;
}

void walk_iterative(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You takes a step!\n";
    }
}

void walk_recursion(int steps){
    if(steps > 0){
        std::cout << "You takes a step!\n";
        walk_recursion(steps-1);
    }
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}