#include <iostream>

// ��� �Լ���(�Է�)

/*void add(void) // ��.����� ���� �Լ� void �Լ���(void){}
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << res << std::endl;
}
*/

// �Է¸� �ִ� �Լ�, ����� ���� ������ return�� ����\
�Է��� ����� ��� : (�Ű�)������ �����ؾ��Ѵ�. Like int a, int b

/*void add(int a, int b)
{
	int res; // ���� ����
	res = a + b;
	std::cout << res << std::endl;
}
*/

// �Լ��� ����, ����, ȣ��

int add(int a, int b); // �Լ� ����

int add(int a, int b) // �Լ� ����
{
	int res;
	res = a + b;
	return res;
}

int main() 
{
	int num1, num2;
	std::cout << "�� ���ڸ� �Է� : " << std::endl;
	std::cin >> num1 >> num2;
	std::cout << add(num1, num2) << std::endl; 
	// add(num1, num2) �Լ� ȣ��\
	�Է����� �������ִ� ���� ���μ�(num1, num2)
	return 0;
}

/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res = " << res << std::endl;

	std::cout << add(10, 20) << std::endl;

	return 0;
}
*/