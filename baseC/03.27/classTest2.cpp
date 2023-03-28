#include <iostream>
using namespace std;

class Human
{
private: // 은닉
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aage, int aid)
	{
		id = aid;
		age = aage;
		strcpy_s(name, aname);
	}
	

	void getData()
	{
		cout << "이름 : " << name <<" "<< "주번 : " << id <<" "<< "나이 : " << age << endl;
	}

};

int main()
{
	//Human h;
	//h.Human("홍길동", 21, 16);
	Human h("홍길동", 21, 16);
	h.getData();

	return 0;
}