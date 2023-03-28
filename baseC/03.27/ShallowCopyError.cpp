#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

//#pragma warning(disable:4996)
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(int aage, const char* name) : age(aage)
	{
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy(this->name, name);
	}

	explicit Person(const Person& copy)
	{
		int len = strlen(copy.name) + 1;
		this->name = new char[len];
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main()
{
	Person man1(29, "Lee");
	Person man2(man1);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}