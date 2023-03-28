#include <stdio.h>

int main()
{
	//int num = 10;	// 초기화
	//int num1;		// 변수 선언
	//num1 = 20;		// 대입
	//num = 30;
	//printf("int의 크기 : %d\n", sizeof(int));

	////char ch; // 문자타입
	//printf("char의 크기 : %d\n", sizeof(char));

	//double d = 3.14;
	//printf("double의 크기 : %d\n", sizeof(double));

	char ch = 0x7f; // 16진법 : 0x**의 형태\
	0 ~ 9, a(10), b(11), c(12), d(13), e(14), f(15)까지해서 16
	// 16을 2진법으로 바꾸면 0111(7) 1111(15)이다.

	unsigned char ch1 = 0x7f;

	printf("ch : %x\nch : %d\n", ch, ch);
	printf("ch1 : %x\nch1 : %d\n", ch1, ch1);
	// 1*** **** 2진수에서 1에 해당하는 값은 부호 결정에 해당한다.\
	1이면 음수, 0이면 양수로 인식하기때문에 출력 시 -가 나옴\
	하지만, unsigned를 쓰면 부호가 항상 양수이므로\
	정상적으로 나온다. 또 128이상의 숫자를 쓰고 싶을때, unsigned 사용\
	왜, 128이상이면 부호비트때문에 값이 음수로 나와용.

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f; // unsigned : 부호를 없앤다.\
	즉, 양수만 사용할 때 사용
	printf("ch2 : %x\nch2 : %d\n", ch2, ch2);
	// 실질적으로 char은 1바이트정도의 메모리 공간을 할당받지만,\
	연산!!이 이루어지면, char이 int 크기(4바이트)로 바뀌어서 나온다.
	printf("uch2 : %x\nuch2 : %d\n", uch2, uch2);

	uch2 = uch2 << 1; // 1001 1111 << 1 : 0011 1110으로 바뀜.
	// 비트 연산자(<<) :uch2를 왼쪽으로 1bit만큼 이동시킨다.
	printf("uch2 << 1 : %x\n", uch2);
	printf("uch2 << 1 : %d\n", uch2);

	ch2 = ch2 << 1; // 1001 1111 -> 0011 1110
	printf("ch2 << 1 : %x\n", ch2);
	printf("ch2 << 1 : %d\n", ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	// 우측으로 이동시킬 때는 부호비트의 값이 비어서\
	이때는 바뀌기 전의 부호를 그대로 쓴다.
	ch2 = ch2 >> 1; // 1001 1111 -> 1100 1111 : -64 + 15 = -49
	uch2 = uch2 >> 1; // 1001 1111 -> 1100 1111
	printf("ch2 >> 1 : %x\n", ch2);
	printf("ch2 >> 1 : %d\n", ch2); // -64 + 15 = -49
	printf("uch2 >> 1 : %x\n", uch2);
	printf("uch2 >> 1 : %d\n", uch2); // 15 + 64 = 79

	return 0;
}