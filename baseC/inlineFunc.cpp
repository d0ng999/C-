#include <iostream>

#define SQUARE(x)	(x) * (x)// 매크로(inline) 함수\
코드안에서 바로 실행됨\
함수의 실행이 빠르다. 자료형이 필요가 없다.
#define SUM(x, y)	(x + y)
#define SQUARE1(x)	x * x

void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	std::cout << SQUARE(10 + 11) << std::endl;
	std::cout << SQUARE1(10 + 11) << std::endl; // 값이 서로 다름\
	10 + 11 * 10 + 11로 인식해서 ()를 잘 써주어야함.
	return 0;
}