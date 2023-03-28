#include <iostream>
int Adder(int num1 = 1, int num2 = 2); // 함수 선언
// Defalut값은 함수 선언부에 작성한다.\
함수의 선언이 별도로 필요한 경우\
매개변수의 디폴트 값은 함수의 선언부분에만 위치하여야 한다.\
디폴트 값의 경우, 실인수가 왼쪽 끝에서부터 적용되니\
부분적으로 디폴트 값을 줄 경우, 오른쪽부터 주어야 한다.

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; 
	// 실인수는 항상 왼쪽 매개변수에서 적용이 된다
	std::cout << Adder(3, 5)<< std::endl;

	return 0;
}

int Adder(int num1, int num2) // 함수의 정의
{
	return num1 + num2;
}