#include <stdio.h>
/*
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("���� ��\nn1 : %d\nn2 : %d\n", n1, n2);

	n1 = 20;
	n2 = 10;

	printf("���� ��\nn1 : %d\nn2 : %d\n", n1, n2);

	return 0;
}
*/

/*
// �̷��� �ص� �����Լ��� �ִ� n1, n2�� ���� ������� �ʴ´�.\
����Ʈ�Լ��� �������
void swap(int n1, int n2)
{
	int a = n1;
	n1 = n2;
	n2 = a;

	printf("swap�Լ�\nn1 : %d\nn2 : %d\n", n1, n2);
	printf("�ּ�\nn1 : %p\nn2 : %p\n", &n1, &n2);
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	printf("ȣ�� ��\nn1 : %d\nn2 : %d\n", n1, n2);
	swap(n1, n2);
	printf("�ּ�\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("ȣ�� ��\nn1 : %d\nn2 : %d\n", n1, n2);
	return 0;
}
*/

// �����ͷ� �����غ���\
������ ���� �����ع����� ���������̰� �ٸ� �Լ����� ������ �Ǿ\
�����Լ��� ���� ����Ǵ���...

void swap(int* pn1, int* pn2)
{
	int a = *pn1;
	*pn1 = *pn2;
	*pn2 = a;

	printf("swap�Լ�\nn1 : %d\nn2 : %d\n", *pn1, *pn2);
	printf("�ּ�\nn1 : %p\nn2 : %p\n", &pn1, &pn2);
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	printf("�ּ�\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("ȣ�� ��\nn1 : %d\nn2 : %d\n", n1, n2);

	swap(&n1, &n2);
	printf("�ּ�\nn1 : %p\nn2 : %p\n", &n1, &n2);
	printf("ȣ�� ��\nn1 : %d\nn2 : %d\n", n1, n2);
	return 0;
}