#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    std::string name;
    int age;
    int year;

    std::cout << "What's this year?:";
    std::cin >> year;

    std::cout << "What's your full name?:";
    // std::cin >> name; // cant get space
    std::getline(std::cin >> std::ws, name); // get space
    // std::ws wait for space in case the variable name cant get the user's input but what the program prints

    std::cout << "What's your age?:";
    std::cin >> age;

    std::cout << "This year is " << year << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}