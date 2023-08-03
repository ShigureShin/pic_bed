#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a;
    //            variable, data type, class, objects, etc.

    double gpa = 2.5;
    std::cout << "sizeof(gpa) = " << sizeof(gpa) << " bytes\n";
    std::cout << "sizeof(double) = " << sizeof(double) << " bytes\n";

    std::string name = "Bro Code is awesome";
    std::cout << "sizeof(name) = " << sizeof(name) << " bytes\n";

    char grade = 'F';
    std::cout << "sizeof(grade) = " << sizeof(grade) << " bytes\n";

    bool student = true;
    std::cout << "sizeof(student) = " << sizeof(student) << " bytes\n";

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << "sizeof(grades[]) = " << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements in grads[]\n";

    std::string students[] = {"Spongbob", "Patrick", "Squidward"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements in students[]\n";

    return 0;
}