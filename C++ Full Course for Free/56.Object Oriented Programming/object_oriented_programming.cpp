#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
    
        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){

    // object = A collection of attributes and methods
    //          They can have characteristics and could peform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print"

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 15;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    return 0;
}