#include <iostream>

int main() // main함수는 소스파일에서 하나만 생성되어야 한다.
{
	int val1 = 0; // 초기화
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1; // cin >> 입력 대상

	int val2;
	std::cout << "두 번째 숫자입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}