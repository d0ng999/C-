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
	Myclass(char* aid, int aage, const char* aname); // ������ ����
	void get(); // �޼ҵ� ����
};

//Myclass::Myclass(char* aid, int aage, const char* aname) // ������ ����
// �����ڰ� ȣ��ǰ� �� �Ŀ� �Ʒ��� �͵��� ������ �ȴ�
//{
//	id = aid;
//	age = aage;
//	strcpy_s(name, 10, aname);
//}

Myclass::Myclass(const char* aname) : id(aid),age(aage) // �̷����·� �ϸ� \
������ ȣ��� ��, �ٷ� ������ �ȴ�.  ->^^, �׷��� ������ �Ӹ��� �ۼ��Ѵ�.
{
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::get()
{
	cout << id << name << age << endl;
}

int main()
{
	Myclass hong("123", 22, "ȫ����"); // Ŭ������ ���� ���� ������ ����!!
	hong.get();

	return 0;
}