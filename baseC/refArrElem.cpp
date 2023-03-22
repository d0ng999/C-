#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 1, 3, 5 };
	cout << "arr 전체크기 : " << sizeof(arr) << endl;
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	//int* pary = &ary; //ary는 그 자체가 주소이므로 &쓸 필요 없음.
	int* ary = arr;
	cout << "arr주소     : " <<arr<< endl;
	cout << "arr[0] 값   : " << ref1 << endl;
	cout << "arr[0] 주소 : "<< &ref1 << endl;
	// 배열의 주소는 배열의 첫 번째 주소와 동일하다
	cout << "arr[0] 값   : " << ref1 + 1 << endl;
	cout << "arr[0] 주소 : " << &ref1 + 1 << endl;
	// ref1 + 1은 두 번째 배열을 말한다. 주소의 크기가 4바이트 증가해서\
	왜 int형이라서!!
	cout << "ary 주소    : " << &ary << endl;
	cout << "ary 값      : " << ary << endl;
	cout << "ary[0] 값   : " << ary[0] << endl;
	cout << "ary[0] 주소 : " << &ary[0] << endl;
	cout << "ary[0] 값   : " << ary[0] << endl;

	for (int i = 0; i < 3; i++)
		cout << arr[i] << endl;

	return 0;
}