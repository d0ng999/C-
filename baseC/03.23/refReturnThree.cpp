#include <iostream>
using namespace std;

int RefRetFuncTwo(int& ref)// 출력이 기본자료형태\
기본자료형태로 받아야한다.
// 출력이 참조자인 경우에만, 
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	return 0;
}