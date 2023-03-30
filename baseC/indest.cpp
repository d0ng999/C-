#include <iostream>

class CTest
{
private:
	int num;
public:
	CTest(int n)
	{
		num = n;
		std::cout <<"CTest Constructor : " << num << std::endl;
	}
	~CTest() // ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
	{
		std::cout << "CTest Destructor" << std::endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int n, int a) : CTest(n)
	{
		subn = a;
		std::cout << "CTest Constructor : " << n << std::endl;
		std::cout << "CTestSub Constructor" << subn << std::endl;
	}
	~CTestSub() // ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
	{
		std::cout << "CTestSub Destructor" << std::endl;
	}
};



int main()
{
	CTest cT(5);
	CTestSub cTS(1, 10);

	

	return 0;
}