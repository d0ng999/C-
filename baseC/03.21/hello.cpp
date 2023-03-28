
#include <iostream>

int main(void)					// 함수 머리 : 출력 함수이름 main(입력)
// 정수(int), 문자(char), 문자열(str) 등..\
void main()을 쓰면 return 0 필요없다, int main(void)은 필요함.
{										// 함수 시작
	int num = 20;				
	// std는 namespace, cout은 std namespace밑에 있는 명령어
	std::cout << "Hello World" << std::endl; // endl은 \n와 같음
	std::cout << num << std::endl;
	std::cout << num << "A";
	std::cout << "BC" << std::endl;
	return 0;						// return 0; // 리턴 - 함수가 끝이 났다는 것을 의미
}										// 함수 끝
