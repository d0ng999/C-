#include <iostream>

// c���� �Լ��� �����ϴ� ����� �Լ� ������ ����������\
c++�� �Լ��� �Լ� �Է¿� ���̴� �Ű������� ������ �����ϴ�.\
��, ������δ� �Լ��� ���� ���Ѵ�.\
�׷��� ���� �Լ���������, �������� ����� �� �ִ�.\
�̸� �����ε� Overloading�̶�� �Ѵ�.

void func()
{

	// std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(char(a))\n");
}

int main()
{
	int n = 10, n1 = 20;
	char ch = 'a';

	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}