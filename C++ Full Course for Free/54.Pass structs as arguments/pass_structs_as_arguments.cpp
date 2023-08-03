#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    // std::cout << &car1 << '\n';

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);
    printCar(car2);

    return 0;
}

// void printCar(Car car){
//     std::cout << &car << '\n'; // passed by value
//     std::cout << car.model << '\n';
//     std::cout << car.year << '\n';
//     std::cout << car.color << '\n';
// }
void printCar(Car &car){
    std::cout << &car << '\n'; // >> this is the same address
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

// if 'car' don't use the address of operator when painting a car
// the color of the car won't change
void paintCar(Car &car, std::string color){
    car.color = color;
}