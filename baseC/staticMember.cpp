#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}

};

int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;

	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;

	}
};
int SoComplex::cmxObjCnt = 0; // 애는 객체가 아니라 생성자와 관련이 없다.
// 생성자 = 초기화
// 생성자는 객체와 관련이 있다.

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}