#include <iostream>
//#include <stdio.h>
// 사용자 정의 자료형인 구조체

struct human
{
	const char name[20];
	int age;
};

int main()
{
	struct human h = { "홍길동", 23 };
	printf("이름 : %s\n", h.name);
	printf("나이 : %d\n", h.age);
	// 구조체 human타입의 변수 h를 선언
	return 0;
}