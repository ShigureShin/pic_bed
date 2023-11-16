#include <iostream>

// 类的定义
class Student{
public:

// member variable
	const char *name;
	int age;
	float score;

// member function
	void say();
};

// 类之外定义成员函数
void Student::say(){
	std::cout << name << " " << age << " " << score << " " << std::endl;
}

int main(){

	// 创建对象
	Student liLei; // create object
	Student allStu[100];
	// class Student liLei; // ok, too

	// 访问成员
	Student stu;
	stu.name = "kokona";
	stu.age = 11;
	stu.score = 100.0f;
	stu.say();

	// 利用对象指针
	Student *pstu = new Student;
	pstu -> name = "kokona";
	pstu -> age = 11;
	pstu -> score = 100.0f;
	pstu -> say();
	
}
