#include <iostream>

// �޸� �����Ҵ� C++Ÿ��

int main()
{
	int size;
	int* arr;

	std::cout << "�迭�� ���� : ";
	std::cin >> size;
	std::cout << std::endl;

	arr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << "��° ���� : ";
		std::cin >> *(arr + i);
	}
	
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return 0;
}