#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}		
}

int main(void)
{
	using Hybrid::HybFunc; 
	// using Ű���带 ���� Hybrid ���ӽ����̽� �ȿ� �ִ� \
	HybFunc �Լ��� �Ʒ��� ���� �׳� �� �� �ִ�.
	HybFunc();
	return 0;
}