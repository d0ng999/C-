#include <iostream>
// ���\
1. ������� : if, switch��\
2. �ݺ���� : for, while��\
for(�ʱ��; ���ǽ�; ������){}

int main(void)
{
	std::cout << "�� ���� ���ڸ� �Է��ϼ���" << std::endl;
	double val1, val2;
	std::cin >> val1 >> val2;

	double result = 0;

	if (val1 > val2)
	{
		int i; // ���� ����
		for (i = val2 + 1; i < val1; i++)
			result += i;
	}
	else
	{
		for (int i = val1 + 1; i < val2; i++) 
			// ������ ������ ����� ���ÿ� ���
			result += i;
	}

	std::cout << "�� ���� ������ ������ ���� " << result;
		
	return 0;
}