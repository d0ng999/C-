#include <iostream>
// 제어문\
1. 선택제어문 : if, switch문\
2. 반복제어문 : for, while문\
for(초기식; 조건식; 증감식){}

int main(void)
{
	std::cout << "두 개의 숫자를 입력하세요" << std::endl;
	double val1, val2;
	std::cin >> val1 >> val2;

	double result = 0;

	if (val1 > val2)
	{
		int i; // 변수 선언
		for (i = val2 + 1; i < val1; i++)
			result += i;
	}
	else
	{
		for (int i = val1 + 1; i < val2; i++) 
			// 하지만 요즘은 선언과 동시에 사용
			result += i;
	}

	std::cout << "두 숫자 사이의 값들의 합은 " << result;
		
	return 0;
}