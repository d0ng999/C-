#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[20];
	int birthday;
public:
	Person(char aname[20], int abirthday) :birthday(abirthday)
	{
		strcpy(name, aname);
	}


	void ShowPerson() // 같은 클래스 내에 있어서 초기화를 안함.
	{
		cout << name << endl << birthday << endl;
	}
};

int main()
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	return 0;
}