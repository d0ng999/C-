#include <iostream>
using namespace std;

class Mycalc
{
private:
	int num1;
	int num2;
	int res;

public:
	// 생성자로 초기화한다. (클론초기화 == 초기화리스트)
	Mycalc(int val1, int val2);

	int add();

	int sub();

	int mul();

	float div();

	void ShowResult();

};

Mycalc::Mycalc(int val1, int val2) : num1(val1), num2(val2)
{}

int Mycalc::add()
{
	res = num1 + num2;
	return res;
}

int Mycalc::sub()
{
	if (num1 > num2)
	{
		res = num1 - num2;
		return res;
	}
	else
	{
		res = num2 - num1;
		return res;
	}
}
int Mycalc::mul()
{
	res = num1 * num2;
	return num1 * num2;
}

float Mycalc::div()
{
	try
	{
		if (num2 == 0)
			throw num2;

		float res = float(num1) / float(num2);
		return res;
	}
	catch (int exception)
	{
		return 0;
	}
}
void Mycalc::ShowResult()
{
	cout << "결과 : " << add() << " " << sub()
		<< " " << mul() << " " << div() << endl;
}

int main()
{
	Mycalc h(20, 0);
	
	h.ShowResult();

	return 0;
}