#include <iostream>
using namespace std;
class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;

	}

	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}

// 객체를 생성하면 객체별로 할당이 됨
// 멤버변수는 할당이 안되는데, this->로 할당을 시킬 수 있다.