#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : experssion2;

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    int number = 9;

    number % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}