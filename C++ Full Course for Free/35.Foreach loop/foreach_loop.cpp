#include <iostream>

int main(){

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    std::string students[] = {"Spongbob", "Patrick", "Squidward", "Sandy"};

    /* for loop */
    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
    //     std::cout << students[i] << '\n';
    // }

    /* foreach loop */
    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}