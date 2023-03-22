#include <stdio.h>
/*
int main()
{
	const int num = 10; // 상수화를 시켜서 num값은 고정되어 있다.\
	바꿀 수 없음!!
	printf("num : %d\n", num );

	int* p = &num; // 자료형* : 포인트, & : 주소연산자\
	자료형* p : 포인트변수에는 주소를 저장할 수 있는 공간
	printf("p에 저장된 값 : %p\n", p);
	printf("p가 참조하는 값 : %d\n", *p); 
	// 현재는 p가 참조하고 있는 값은 num 이다
	*p = 100; // 여기서 쓰인 *는 참조연산자.\
	간접참조 연산자 - 포인터가 가르치는 주소에 값을 참조해라!!
	printf("p가 참조하는 값 : %d\n", *p);
	printf("num : %d\n", num);
	// &num 가 포인트 변수p 에 저장되어 있었는데\
	포인트 변수 p에 저장된 주소값을 100으로 바꾸었으니\
	이는 곧 num의 값을 변경한 것과 같다.

	return 0;
}
*/

int main()
{
	const int num = 10; // 상수화 시켜도 포인터라는 변수를 통해\
	값을 변경할 수 있다.
	int* p = &num;
	printf("num : %d\n", num);
	*p = 100;
	printf("num : %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1; // 데이터의 상수화
	printf("주소 pa : %p\n", pa);
	printf("pa : %d\n", *pa);

	pa = &num2;
	printf("주소 pa : %p\n", pa); // 주소값이 변경이 된다.
	printf("pa : %d\n", *pa);

	// *pa = 50; const 포인터변수의 경우, 주소를 변경시키는 것은 가능\
	단, 직접적으로 데이터 값을 변경시키는 것은 불가능하다.

	int* const pb = &num1; // 포인터변수의 상수화
	// pb = &num2; - const의 위치에 따라서 달라짐\
	const가 포인트변수 앞에 붙으면\
	주소 값(포인터변수)을 집어넣는 것은 가능\
	단 데이터 값은 불가능
	//반대로 const가 포인터변수 뒤에 붙으면\
	주소 값은 불가능하지만\
	데이터 값을 넣는 것은 가능
	*pb = 70;

	return 0;
}