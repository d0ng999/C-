#include <iostream>
int Adder(int num1 = 1, int num2 = 2); // �Լ� ����
// Defalut���� �Լ� ����ο� �ۼ��Ѵ�.\
�Լ��� ������ ������ �ʿ��� ���\
�Ű������� ����Ʈ ���� �Լ��� ����κп��� ��ġ�Ͽ��� �Ѵ�.\
����Ʈ ���� ���, ���μ��� ���� ���������� ����Ǵ�\
�κ������� ����Ʈ ���� �� ���, �����ʺ��� �־�� �Ѵ�.

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; 
	// ���μ��� �׻� ���� �Ű��������� ������ �ȴ�
	std::cout << Adder(3, 5)<< std::endl;

	return 0;
}

int Adder(int num1, int num2) // �Լ��� ����
{
	return num1 + num2;
}