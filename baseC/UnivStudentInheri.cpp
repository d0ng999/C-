#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is : " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << "years old" << endl;
	}
};

class UnivStudent : public Person // 상속
{
private:
	char major[50];
public:
	/* 상속을 하고있어 부모가 가지고 있는
	멤버변수들도 초기값 활용해야 함*/
	UnivStudent(char* myname, int myage, char* mymajor) 
		: Person(myage, myname)// 생성자를 호출하는 중
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng,");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 24, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}