#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	try
	{
		//cout << "�������� �Է��ϼ��� : ";
		//cin >> a;
		//cout << "������ �Է��ϼ��� : ";
		//cin >> b;
		if (b == 0) throw b;

		c = a / b;
		cout << "�� : " << c << endl;
		d = a % b;
		cout << "������ : " << d << endl;
	}
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
}

int main()
{
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);
	divide(100, 20);

	cout << "���ܰ� �߻��� �ص� ��������!!!" << endl;

	return 0;
}