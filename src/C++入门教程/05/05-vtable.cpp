#include <iostream>
#include <string>
using namespace std;

//People类
class People{
public:
    People(string name, int age);
public:
    virtual void display();
    virtual void eating();
protected:
    string m_name;
    int m_age;
};
People::People(string name, int age): m_name(name), m_age(age){ }
void People::display(){
    cout<<"Class People: display()"<<endl;
}
void People::eating(){
    cout<<"Class People: eating()"<<endl;
}

//Student类
class Student: public People{
public:
    Student(string name, int age, float score);
public:
    virtual void display();
    virtual void examing();
protected:
    float m_score;
};
Student::Student(string name, int age, float score):
    People(name, age), m_score(score){ }
void Student::display(){
    cout<<"Class Student: display()"<<endl;
}
void Student::examing(){
    cout<<"Class Student: examing()"<<endl;
}

//Senior类
class Senior: public Student{
public:
    Senior(string name, int age, float score, bool hasJob);
public:
    virtual void display();
    virtual void partying();
private:
    bool m_hasJob;
};
Senior::Senior(string name, int age, float score, bool hasJob):
    Student(name, age, score), m_hasJob(hasJob){ }
void Senior::display(){
    if(m_hasJob){
        cout<<"Class Senior: display()"<<endl;
    }else{
        cout<<"Class Senior: display()"<<endl;
    }
}
void Senior::partying(){
    cout<<"Class Senior, partying()"<<endl;
}

int main(){
    People *p = new People("ZH", 29);
    p -> display();

    p = new Student("WG", 16, 84.5);
    p -> display();

    p = new Senior("LZ", 22, 92.0, true);
    p -> display();

    return 0;
}