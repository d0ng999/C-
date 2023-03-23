#include <iostream>
#include <string>

#pragma warning(disable:4996)

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = new char[len]; // 생성자 호출
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	delete[]str; // 소멸자 호출
	return 0;
}