#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);

    // z = pow(2, 3);           // >> 8
    // z = sqrt(9);             // >> 3
    // z = abs(-3);             // >> 3
    // z = round(3.14);         // >> 3
    // z = ceil(3.14);          // >> 4
    z = floor(3.99);            // >> 3



    std::cout << z;

    return 0;
}