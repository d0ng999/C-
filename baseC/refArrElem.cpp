#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 1, 3, 5 };
	cout << "arr ��üũ�� : " << sizeof(arr) << endl;
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	//int* pary = &ary; //ary�� �� ��ü�� �ּ��̹Ƿ� &�� �ʿ� ����.
	int* ary = arr;
	cout << "arr�ּ�     : " <<arr<< endl;
	cout << "arr[0] ��   : " << ref1 << endl;
	cout << "arr[0] �ּ� : "<< &ref1 << endl;
	// �迭�� �ּҴ� �迭�� ù ��° �ּҿ� �����ϴ�
	cout << "arr[0] ��   : " << ref1 + 1 << endl;
	cout << "arr[0] �ּ� : " << &ref1 + 1 << endl;
	// ref1 + 1�� �� ��° �迭�� ���Ѵ�. �ּ��� ũ�Ⱑ 4����Ʈ �����ؼ�\
	�� int���̶�!!
	cout << "ary �ּ�    : " << &ary << endl;
	cout << "ary ��      : " << ary << endl;
	cout << "ary[0] ��   : " << ary[0] << endl;
	cout << "ary[0] �ּ� : " << &ary[0] << endl;
	cout << "ary[0] ��   : " << ary[0] << endl;

	for (int i = 0; i < 3; i++)
		cout << arr[i] << endl;

	return 0;
}