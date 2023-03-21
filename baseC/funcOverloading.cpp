#include <iostream>

// c언어는 함수를 구별하는 방법이 함수 명으로 구별하지만\
c++은 함수를 함수 입력에 쓰이는 매개변수로 구별이 가능하다.\
단, 출력으로는 함수를 구별 못한다.\
그래서 같은 함수명이지만, 다중으로 사용할 수 있다.\
이를 오버로딩 Overloading이라고 한다.

void func()
{

	// std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	// std::cout << "func1(a)" << std::endl;
	printf("func(char(a))\n");
}

int main()
{
	int n = 10, n1 = 20;
	char ch = 'a';

	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}