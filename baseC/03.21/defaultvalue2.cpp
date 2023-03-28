#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);


int main()
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D,D,D] : " << BoxVolume() << std::endl;\
	디폴트 값이 2개만 되어 있다.\
    즉 length 매개변수에는 디폴트값이 없어서 입력이 필요하다.

	return 0;
}

int BoxVolume(int length, int width, int height)
{	
	return length * width * height;
}