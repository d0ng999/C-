#include <iostream>
using namespace std;

// 클론 초기화가 필요한 경우\
1. 상수멤버변수 \
2. 객체멤버변수  \
3. 참조멤버변수   \
(4. 멤버변수)

class ConstSome
{
public:
	const int val; // 상수멤버변수
	ConstSome(int n) : val(n){}
	void printval()
	{
		cout << val << endl;
	}

};

class RefSome
{
public:
	int& ref; // 참조멤버변수
	RefSome(int n):ref(n){}
	void printval()
	{
		cout << ref << endl;
	}
};

class Position
{
public:
	int x, y;
	Position(int ax, int ay)
	{
		x = ax;
		y = ay;
	}
};

class ObjSome
{
public:
	Position pos; // 객체멤버변수
	ObjSome(int ax, int ay) : pos(ax, ay){}
	void printfval()
	{
		cout << pos.x << " " << pos.y << endl;
	}

};



int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;

	RefSome r(103);
	r.printval();

	ObjSome o(10, 10);
	o.printfval();

	return 0;
}