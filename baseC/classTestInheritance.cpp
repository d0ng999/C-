#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Person
{
private:
	char name[30];
	int age;
public:
	Person(const char* aname, int aage); // Ÿ�Ը� ���� �͵� ����
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
	std::cout << "�̸� : " << name << std::endl << "���� : " << age << std::endl;
}

Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage), studentId(astudentId)
{}

void Student::showData()
{
	std::cout << "�й� : " << studentId << std::endl;
}



// �����ε�(�׳� �Լ��� �̸��� ���� ��)\
�������̵�(��� ���迡 ���� ��, �Լ��� �̸��� ���� ��)

int main()
{
	Person p("ȫȫȫ", 24);
	p.getData();
	Student s("ȫȫȫ", 24, 12345678);
	s.showData();
	return 0;
}