#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n) : num(n)
	{
		cout << "CTest Constructor : " << num << endl;
	}
	virtual ~CTest()
	{
		cout << "CTest Destructor" << endl;
	}
	void func()
	{
		cout << "CTest func()" << endl;
	}
	virtual void vfunc()
	{
		cout << "Ctest vfunc() - virtual" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int nn, int n) : CTest(nn), subn(n)
	{
		cout << "CTestSub : " << nn << endl;
		cout << "CTestSub Constructor : " << subn << endl;
	}
	~CTestSub()
	{
		cout << "CTestSub Destructor" << endl;
	}
	void vfunc()
	{
		cout << "CTestSub vfunc " << endl;
	}
};

int main()
{
	CTest ct1(10);
	cout << "++++++++++++++++" << endl;
	CTestSub ct2(5, 50);
	cout << "++++++++++++++++" << endl;
	CTest* ps = new CTestSub(3, 30);

	delete ps;

	return 0;
}