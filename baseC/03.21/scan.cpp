#include <iostream>

int main() // main�Լ��� �ҽ����Ͽ��� �ϳ��� �����Ǿ�� �Ѵ�.
{
	int val1 = 0; // �ʱ�ȭ
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1; // cin >> �Է� ���

	int val2;
	std::cout << "�� ��° �����Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "�������: " << result << std::endl;
	return 0;
}