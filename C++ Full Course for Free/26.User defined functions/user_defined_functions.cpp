#include <iostream>

void happyBirthday(std::string name){

    std::cout << "Happy Birthday to " << name << "!" << '\n';

}

int main(){

    // function = a block of reusable code

    std::string name = "Shin";

    happyBirthday(name);

    return 0;
}