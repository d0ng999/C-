#include <stdio.h>

int  g = 0;
void func()
{
	printf("func()   : %p\n", func);
}

int main()
{
	int n = 10;		// ��������
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("Global g : %p\n", &g);
	printf("Static c : %p\n", &c);
	printf("Local n  : %p\n", &n); // ���ÿ���
	printf("const d  : %p\n", &d); // ���ÿ���
	printf("array    : %p\n", ary);// ���ÿ���

	return 0;
}

/*
�޸𸮿����� ũ�� ������
1. �ڵ弼�׸�Ʈ -- �Լ�
2. �����ͼ��׸�Ʈ -- ���� ������ ����, ���� ������ ����
*/