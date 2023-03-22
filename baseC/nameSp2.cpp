#include <iostream>

namespace BestComImp1 // 함수의 선언
{
	void SimpleFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}


int main(void)
{
	BestComImp1::SimpleFunc(); // 범위스코프::를 사용한다.
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void) // 함수의 정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}