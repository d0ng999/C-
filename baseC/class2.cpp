#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
	int id;
	int age;
public:
	Human(const char* aname, int aid, int aage)
	{
		name = new char[strlen(aname) + 1];
		//strcpy_s(name, aname);
		id = aid;
		age = aage;
	}

	~Human() 
	{
		delete[] name;
	} // �Ҹ���

	void get()
	{
		cout << "�̸� : " << name << " " << "�ֹ� : " << id << " " << "���� : " << age << endl;
	}
};

int main()
{
	Human h("ȫ����", 21, 21);
	h.get();

	Human hary[3] = { Human("�迵��", 2, 23),
					  Human("��ö��", 6, 12),
					  Human("�����", 5, 1) };
	hary[0].get();
	hary[1].get();
	hary[2].get();
		
	return 0;
}