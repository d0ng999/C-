#include <iostream>
using namespace std;

class Myclass // Ŭ���� ������ ù ���ڴ� �빮�ڷ� ��
{
private: // ����������, �ܺ� ���� ���� - ��������� ������ private(95%)
	int private_val;
public: // ����������, �ܺ� ���� ����
	int public_val;
protected: // ����������, ��ӿ����� ���� ����
	int protected_val;

public:		// ����Լ��� ������ Public���� �����ؾ��Ѵ�.
	void set(int an)
	{
		private_val = an;
		//cout << private_val << endl;
	}
	void get()
	{
		cout << public_val << endl;
		cout << private_val << endl;
	}
};

int main()
{
	Myclass o; // Myclass Ÿ���� ��ü o�� �����ߴ�.
	//o.private_val;
	o.public_val = 100;
	//o.protected_val;
	o.set(200);

	o.get();


	return 0;
}