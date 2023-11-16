#include <iostream>

void swap1(int a, int b);
void swap2(int *p1, int *p2);
void swap3(int &r1, int &r2);

int main(){
    int num1, num2;

    num1=1, num2=3;
    swap1(num1, num2);
    std::cout<<num1<<" "<<num2<<std::endl;

    num1=1, num2=3;
    swap2(&num1, &num2);
    std::cout<<num1<<" "<<num2<<std::endl;

    num1=1, num2=3;
    swap3(num1, num2);
    std::cout<<num1<<" "<<num2<<std::endl;

}

void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap3(int &r1, int &r2){
    int temp = r1;
    r1 = r2;
    r2 = temp;
}