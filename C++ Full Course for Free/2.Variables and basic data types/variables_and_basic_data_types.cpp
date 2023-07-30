#include <iostream>

int main(){

    // integer (whole number)
    int x; // declaration
    x = 5; // assignment

    std::cout << x << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    double age = 21;

    std::cout << price << '\n';

    // single character
    char grade = 'A';
    char initial = 'B';

    std::cout << initial << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    // string (objects that represents a squence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake st.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}