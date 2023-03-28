#include <iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int& num2 = num1; //  참조자를 선언했다.\
	참조자 선언의 경우 선언과 동시에 초기화를 시켜주어야한다.
	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;

	return 0;
}