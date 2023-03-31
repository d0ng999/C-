#include <iostream>
using namespace std;

class Myclass
{
	int num1, num2;
	const char* name;
public:
	Myclass(int n1 = 0, int n2 = 0, const char* aname = nullptr) //nullptr = nullpointer
		: num1(n1), num2(n2), name(aname){}

	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}

};

int main()
{
	Myclass m(1, 2, "Hong");
	m.ShowData();
	Myclass cm(m);
	cm.ShowData();

	Myclass cm1;
	cm1 = cm;
	cm1.ShowData();
	return 0;
}