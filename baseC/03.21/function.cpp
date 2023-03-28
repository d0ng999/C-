#include <iostream>

// 출력 함수명(입력)

/*void add(void) // 입.출력이 없는 함수 void 함수명(void){}
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << res << std::endl;
}
*/

// 입력만 있는 함수, 출력이 없기 때문에 return도 없다\
입력을 만드는 방법 : (매개)변수를 선언해야한다. Like int a, int b

/*void add(int a, int b)
{
	int res; // 변수 선언
	res = a + b;
	std::cout << res << std::endl;
}
*/

// 함수의 선언, 정의, 호출

int add(int a, int b); // 함수 선언

int add(int a, int b) // 함수 정의
{
	int res;
	res = a + b;
	return res;
}

int main() 
{
	int num1, num2;
	std::cout << "두 숫자를 입력 : " << std::endl;
	std::cin >> num1 >> num2;
	std::cout << add(num1, num2) << std::endl; 
	// add(num1, num2) 함수 호출\
	입력으로 전달해주는 놈을 실인수(num1, num2)
	return 0;
}

/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res = " << res << std::endl;

	std::cout << add(10, 20) << std::endl;

	return 0;
}
*/