#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(char* aname, int abirthday) : birthday(abirthday)
	{
		cout << "aa" << endl;
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
	}

	Person(const Person& copy) : birthday(copy.birthday)
	{
		cout << "bb" << endl;

		this->name = new char[strlen(copy.name) + 1]; // 동적할당 new
		strcpy(this->name, copy.name);
	};

	Person& operator=(const Person& copy)
	{
		cout << "ee" << endl;

		this->name = new char[strlen(copy.name) + 1]; // 동적할당 new
		strcpy(this->name, copy.name);
		this->birthday = copy.birthday;
		return *this;
	}

	void ShowPerson()
	{
		cout << "cc" << endl;

		cout << name << endl << birthday << endl;
	}

	~Person() {
		cout << "dd" << endl;

		delete[]name;
	}
};

int main()
{
	Person p1("name", 123123123);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("강감찬", 20001230);
	p4 = p1; // operator 사용
	p4.ShowPerson();

	return 0;
}