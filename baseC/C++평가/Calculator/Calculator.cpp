//author ȫ����
#include "Calculator.h"
double Calculator::Calculate(string str) // ������� ����
{
	num.clear();
	cper.clear();
	stringstream ss(str); // stringstream ss�� str ���� ����
	double Num_obj; // ���� ����
	char Char_obj; // ������ ����

	while (ss >> Num_obj) // ss ���ڿ� �ȿ� ���ڰ� ���� ������ ����
	{
		num.push_back(Num_obj); // num�̶�� vector ������ü�� ���ڸ� ����
		if (ss >> Char_obj) // ss ���ڿ��ȿ� ���ڰ� ���� ������ ����
		{
			cper.push_back(Char_obj); // cper - vector ������ü�� ���ڸ� ����
		}
	}
	num.shrink_to_fit();
	cper.shrink_to_fit();


	double res = num[0];
	char cres = cper[0];

	if (cper[0] >= 42 and cper[0] <= 47) 
	// �ƽ�Ű�ڵ�� ���ڰ� 42���� 47���ϰ� �ƴϸ� ����
	{
		if (cper[0] == '+')
		{
			cout << "��� �� : " << num[0] + num[1] << endl;
			return num[0] + num[1];
		}
		else if (cper[0] == '-')
		{
			cout << "��� �� : " << num[0] - num[1] << endl;
			return num[0] - num[1];
		}
		else if (cper[0] == '*')
		{
			cout << "��� �� : " << num[0] * num[1] << endl;
			return num[0] * num[1];
		}
		else if (cper[0] == '/')
		{
			if (num[1] == 0)
			{
				cout << "0���� ���� �� �����ϴ�." << endl;
				return 0;
			}
			else
			{
				cout << "��� �� : " << num[0] / num[1] << endl;
				return num[0] / num[1];
			}
		}
	}
	else
	{
		cout << "��ȣ�� �ٽ� �Է��ϼ���" << endl;
		return 0;
	}
}


