#include <iostream>
using std::cin; // std 네임스페이스에 있는 cin이라는 함수만 사용
using std::cout;// std 네임스페이스에 있는 cout이라는 함수만 사용
using std::endl;// std 네임스페이스에 있는 endl이라는 함수만 사용

using namespace std; 
// std 네임스페이스에 있는 모든 함수를 사용

int main(void)
{
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello" << "World" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}