#include <iostream>

int main(){

    std::string students[] = {"Spongbob", "Patrick", "Squidward", "Sandy"};

    // output one student one time
    // std::cout << students[0];

    // output all students
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    return 0;
}