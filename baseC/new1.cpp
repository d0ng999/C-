#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;

	printf("�迭 ���� : ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);

	printf("%d���� ���ڸ� �Է��ϼ���.\n", size);
	for (int i = 0; i < size; i++)
	{
		printf("%d��° ���� : ", i + 1);
		//scanf_s("%d", (arr + i));
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}

	free(arr);
	
	return 0;
}

// �迭�� �迭 ���� �ּҰ��� ���������� ����ִ°�\
����Ʈ�� ����Ʈ ���� �ּҰ��� �ٸ���.