#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main()
{
	Temporary(100); // 임시객체라서 생성자 호출과 소멸자 호출이\
	동시에 이루어진다!
	cout << "*********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo(); // 얘도 임시객체네
	cout << "*********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	/* 임시 객체를 참조한 형태 여기선 임시객체가 사라지지않았다.
	임시객체를 어디 저장안하면 사라져버리는데
	저장해버리면 안사라진다! */
	cout << "*********** end of main!" << endl << endl;
	return 0;
}