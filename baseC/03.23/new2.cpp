#include <iostream>

// 메모리 동적할당 C++타입

int main()
{
	int size;
	int* arr;

	std::cout << "배열의 개수 : ";
	std::cin >> size;
	std::cout << std::endl;

	arr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << "번째 숫자 : ";
		std::cin >> *(arr + i);
	}
	
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return 0;
}