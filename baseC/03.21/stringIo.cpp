#include <iostream>

int main(void)
{
	char ch[5] = "wwww"; // 문자열은 끝에 null문자가 필요
	// 배열을 생성과 동시에 초기화를 시켜주는게 좋은 방안이다.\
	배열의 경우 마지막 인덱스값은 항상 null 값이다.
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a'; // 문자를 하나씩 저장\
	문자는 마지막에 null이 필요없다. 

	for (int i = 0; i < 5; i++)
	{
		printf("%c", ch[i]);
	}

	//printf("char 크기 : %d\n", sizeof(char));
	//printf("%s\n", ch); 
	// ch는 현재 문자열이 아닌 문자형태로 입력되어 있다.\
	문자열로 출력을 하려면 마지막 인덱스 값이 Null이여야하는데\
	Null이 아니라서 이상한 값이 출력됨
	//printf("%c\n", ch);
	//printf("%c\n", ch[4]);
	//printf("%s\n", ch[4]);
	printf("배열이름 ch : %p\n", ch);
	printf("배열이름 ch : %p\n", &ch);

	// ch[0] = 'a'; -- 배열을 생성 후 값을 넣는 방법\
	인덱스로 하나하나씩 집어넣어야함

	return 0;
}