#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	cout << Add	<int>	 (15, 20)		<< endl;
	cout << Add	<double> (2.9, 3.7)		<< endl;
	cout << Add	<int>	 (3.3 , 3.3)	<< endl;
	cout << Add	<double> (3.14, 2.75)	<< endl;
	// 자료형은 생략해도 되지만, 있는게 더 명확함
	return 0;
}
