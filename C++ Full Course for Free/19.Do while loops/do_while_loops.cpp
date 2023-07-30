#include <iostream>

int main(){

    // do while loop = do some block of code first,
    //                 THEN repeat again if condition is true

    int number;

    // while loops
    // std::cout << "Enter a positive #: ";
    // std::cin >> number;
    // while(number < 0){
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // }

    // do while loops
    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}