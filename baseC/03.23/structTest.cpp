#include <iostream>
//#include <stdio.h>
// ����� ���� �ڷ����� ����ü

struct human
{
	const char name[20];
	int age;
};

int main()
{
	struct human h = { "ȫ�浿", 23 };
	printf("�̸� : %s\n", h.name);
	printf("���� : %d\n", h.age);
	// ����ü humanŸ���� ���� h�� ����
	return 0;
}