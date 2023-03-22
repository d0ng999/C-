#include <stdio.h>
/*
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("변경 전\nn1 : %d\nn2 : %d\n", n1, n2);

	n1 = 20;
	n2 = 10;

	printf("변경 후\nn1 : %d\nn2 : %d\n", n1, n2);

	return 0;
}
*/

/*
// 이렇게 해도 메인함수에 있는 n1, n2의 값은 변경되지 않는다.\
포인트함수를 써줘야함
void swap(int n1, int n2)
{
	int a = n1;
	n1 = n2;
	n2 = a;

	printf("swap함수\nn1 : %d\nn2 : %d\n", n1, n2);
	printf("주소\nn1 : %p\nn2 : %p\n", &n1, &n2);
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	printf("호출 전\nn1 : %d\nn2 : %d\n", n1, n2);
	swap(n1, n2);
	printf("주소\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("호출 후\nn1 : %d\nn2 : %d\n", n1, n2);
	return 0;
}
*/

// 포인터로 구현해보기\
데이터 값을 변경해버리면 지역변수이고 다른 함수에서 변경이 되어도\
메인함수의 값이 변경되더라...

void swap(int* pn1, int* pn2)
{
	int a = *pn1;
	*pn1 = *pn2;
	*pn2 = a;

	printf("swap함수\nn1 : %d\nn2 : %d\n", *pn1, *pn2);
	printf("주소\nn1 : %p\nn2 : %p\n", &pn1, &pn2);
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	printf("주소\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("호출 전\nn1 : %d\nn2 : %d\n", n1, n2);

	swap(&n1, &n2);
	printf("주소\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("호출 후\nn1 : %d\nn2 : %d\n", n1, n2);
	return 0;
}