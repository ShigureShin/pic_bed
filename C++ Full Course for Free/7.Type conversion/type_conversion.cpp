#include <iostream>

int main(){

    
    // type conversion = conversion a value of one data type to another 
    // Implicit = automatic
    // Explicit = Precede value with new data type (int)

    double x = (int) 3.14;
    std::cout << x << '\n'; // output: 3

    char y = 100;
    std::cout << y << '\n'; // output: d

    std::cout << (char) 100 << '\n'; // output: d

    int correct = 8;
    int questions = 10;
    // double score = correct/questions * 100; // int/int cant get double
    double score = correct/(double)questions * 100;
    std::cout << score << "%";

    return 0;
}