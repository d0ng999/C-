#include <iostream>

class StaticTest
{
private:
	static int a; // 클래스 꺼
	int b;
public:
	StaticTest();
	static void setData(int aa);
	void print();
};

int StaticTest::a = 10;

StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::setData(int aa)
{
	//this->a = 30; // 객체 친구가 아닌데 this를 쓰니 오류뜸
	a = aa;
}

void StaticTest::print()
{
	std::cout << "a : " << a << " " << "b : " << b << std::endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s2.setData(50);

	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();

	return 0;
}