#include <iostream>
using namespace std;

class Human
{
private: // ����
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
		cout << "�̸� : " << name <<" "<< "�ֹ� : " << id <<" "<< "���� : " << age << endl;
	}

};

int main()
{
	//Human h;
	//h.Human("ȫ�浿", 21, 16);
	Human h("ȫ�浿", 21, 16);
	h.getData();

	return 0;
}