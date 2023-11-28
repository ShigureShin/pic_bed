#include <iostream>

int main(){

    // pointers = variable that stores a memory address of another variable
    // sometimes it's easier to work with an address

    // & address of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // array is already a address

    std::cout << &name << ' '; // >> 0x8c667ffe40
    std::cout << *pName << '\n'; // >> Bro

    std::cout << &age << ' '; // >> 0x8c667ffe3c
    std::cout << *pAge << '\n'; // >> 21

    std::cout << freePizzas << ' '; // >> 0x5ea25ff660
    std::cout << *pFreePizzas << '\n'; // >> pizza1

    return 0;
}