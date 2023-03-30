#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Person
{
private:
	char name[30];
	int age;
public:
	Person(const char* aname, int aage); // 타입만 적는 것도 가능
	void getData();
};

class Student : public Person
{
private:
	int studentId;
	
public:
	Student(const char* aname, int aage, int astudentId);
	void showData();
};

Person::Person(const char* aname, int aage) : age(aage)
{
	strcpy(name, aname);
}

void Person::getData()
{
	std::cout << "이름 : " << name << std::endl << "나이 : " << age << std::endl;
}

Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage), studentId(astudentId)
{}

void Student::showData()
{
	std::cout << "학번 : " << studentId << std::endl;
}



// 오버로딩(그냥 함수의 이름이 같을 때)\
오버라이딩(상속 관계에 있을 때, 함수의 이름도 같을 때)

int main()
{
	Person p("홍홍홍", 24);
	p.getData();
	Student s("홍홍홍", 24, 12345678);
	s.showData();
	return 0;
}