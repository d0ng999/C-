#include <iostream>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3����

class Myclass 
{
	
private: // ������� : �Ӽ�
	char* id; // ������ �Ұ���, ������ ����, ���� �Ҵ�
	int age;
	char name[10]; //  ���� ����, ������ ����, ���� �Ҵ�(�⺻)
	
public: // ����Լ� (=�޼ҵ�) : ���
	void set(char* aid, int aage, const char* aname);

	void get();
	
};

// set, get �Լ��� class���� ���� ���� �ȴ�. ��� �Լ� �Է��� �����ϰ�
void Myclass::set(char* aid, int aage, const char* aname)
// �Լ��� �� ������ ����������Ѵ�
{
	id = aid;
	age = aage;
	strcpy_s(name,10, aname);
}

void Myclass::get()
{
	cout << id << name << age << endl;
}

int main()
{
	Myclass a; // Ŭ������ ���� ���� ������ ����!!
	a.set("123", 22, "ȫ����");
	a.get();

	return 0;
}