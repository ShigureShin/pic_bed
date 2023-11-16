#include <iostream>

// int max(int x, int y){
//     return (x > y) ? x : y;
// }
// double max(double x, double y){
//     return (x > y) ? x : y;
// }

/* -------------------------------------------------------------------------- */
/*                        function template definition                        */
/* -------------------------------------------------------------------------- */
template <typename T, typename U>

// 'auto' to make sure return value's type is the original type
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){

   // function templates = describes what a function looks like.
   //                      Can be used to generate as many overloaded functions as needed, 
   //                      each using different data types 

    std::cout << max(1, 2) << '\n';

    return 0;
}