#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char *name;
	int birthday;
public:
	Person(char *aname, int abirthday) : birthday(abirthday)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
	}

	void ShowPerson()
	{
		cout << name << endl << birthday << endl;
	}

	~Person() {
		delete[]name;
	}
};

int main()
{
	Person* p1 = new Person("name", 123123123);

	Person p2(*p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	return 0;
}