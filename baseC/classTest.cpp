#include <iostream>
using namespace std;

class Myclass // 클래스 생성시 첫 글자는 대문자로 해
{
private: // 접근제한자, 외부 접근 제한 - 멤버변수는 무조건 private(95%)
	int private_val;
public: // 접근제한자, 외부 접근 가능
	int public_val;
protected: // 접근제한자, 상속에서만 접근 가능
	int protected_val;

public:		// 멤버함수는 무조건 Public으로 선언해야한다.
	void set(int an)
	{
		private_val = an;
		//cout << private_val << endl;
	}
	void get()
	{
		cout << public_val << endl;
		cout << private_val << endl;
	}
};

int main()
{
	Myclass o; // Myclass 타입의 객체 o을 생성했다.
	//o.private_val;
	o.public_val = 100;
	//o.protected_val;
	o.set(200);

	o.get();


	return 0;
}