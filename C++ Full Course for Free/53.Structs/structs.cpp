#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc)
    //          variables in a struct are known as "members"
    //          members can be access with. "Class Member Access Operator"

    student student1;
    student1.name = "Spongbob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;

}