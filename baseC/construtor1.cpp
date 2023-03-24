#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	// 생성자 오버로딩
	SimpleClass() // 함수이름과 같은 생성자 - 출력인 자료형을 안 써줘도 된다.
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1; // sc1이라는 객체를 생성
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}