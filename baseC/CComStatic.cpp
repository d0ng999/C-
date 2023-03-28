#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;
	cnt++;
	cout << "Current cnt : " << cnt << endl;

}

void static_Counter()
{
	static int cnt;
	cnt++;
	cout << "Current static cnt : " << cnt << endl;

}

int main()
{
	for (int i = 0; i < 10; i++)
		Counter(), static_Counter();

	return 0;
}