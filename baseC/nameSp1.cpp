#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
		{
			std::cout << "ProgCom이 정의한 함수" << std::endl;
		}
}


int main()
{
	BestComImp1::SimpleFunc(); 
	// BestComImp1에 있는 SimpleFunc라는 함수를 사용할 것이다
	ProgComImp1::SimpleFunc();
	// BestComImp1에 있는 SimpleFunc라는 함수를 사용할 것이다

	return 0;
}