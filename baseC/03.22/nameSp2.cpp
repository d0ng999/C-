#include <iostream>

namespace BestComImp1 // �Լ��� ����
{
	void SimpleFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}


int main(void)
{
	BestComImp1::SimpleFunc(); // ����������::�� ����Ѵ�.
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void) // �Լ��� ����
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}