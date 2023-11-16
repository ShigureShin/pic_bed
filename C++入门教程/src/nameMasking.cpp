#include <iostream>

class A{
public:
    int num;
    A();
    // void show_num(int num);
    // void show_num();
};
A::A(){}
// void A::show_num(){
//     std::cout << "Class A's another" << std::endl;
// }
// void A::show_num(int num){
//     std::cout << "Class A's num= " << num << std::endl;
// }

class B : public A{
public:
    void show_num(int num);
};
void B::show_num(int num){
    std::cout << "Class B's num= " << std::endl;
}

class C : public B{
public:
    // void show_num(int num);
    virtual void show_num();
};
// void C::show_num(int num){
//     std::cout << "Class C's" << std::endl;
// }
void C::show_num(){
    std::cout << "Class C's another" << std::endl;
}

int main(){
    A *a = new A;
    // a->show_num(20);

    // B *b = new B;
    // a = b;
    // a->show_num(23);

    C *c = new C;
    a = c;
    a->show_num();
    return 0;
}