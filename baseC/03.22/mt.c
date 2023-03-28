#include <stdio.h>

int  g = 0;
void func()
{
	printf("func()   : %p\n", func);
}

int main()
{
	int n = 10;		// 지역변수
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("Global g : %p\n", &g);
	printf("Static c : %p\n", &c);
	printf("Local n  : %p\n", &n); // 스택영역
	printf("const d  : %p\n", &d); // 스택영역
	printf("array    : %p\n", ary);// 스택영역

	return 0;
}

/*
메모리영역은 크게 나누면
1. 코드세그먼트 -- 함수
2. 데이터세그먼트 -- 동적 데이터 영역, 정적 데이터 영역
*/