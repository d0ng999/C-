//author ȫ����
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator cal;
    string Instr;
	cout << "Press \"ctrl + c\" to exit the program" << endl;
	while (true)
	{
		cout << "���� 'a+b | a-b | a*b | a/b' �Է��ϼ��� : ";
        getline(cin, Instr);
		cal.Calculate(Instr);
	}
	return 0;
}