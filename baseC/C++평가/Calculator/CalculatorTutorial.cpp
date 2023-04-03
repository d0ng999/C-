//author 홍동현
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator cal;
    string Instr;
	cout << "Press \"ctrl + c\" to exit the program" << endl;
	while (true)
	{
		cout << "형식 'a+b | a-b | a*b | a/b' 입력하세요 : ";
        getline(cin, Instr);
		cal.Calculate(Instr);
	}
	return 0;
}