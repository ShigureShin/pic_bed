#include <iostream>

double square(double length);
double cube(double length);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 5.0;
    double area;

    area = square(length);


    std::cout << "Area: " << area << " cm^2\n";

    return 0;
}

double square(double length){

    double result;

    result = length * length;

    return result;
}

double cube(double length){

    double result;

    result = length * length * length;

    return result;

}