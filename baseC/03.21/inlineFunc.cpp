#include <iostream>

#define SQUARE(x)	(x) * (x)// ��ũ��(inline) �Լ�\
�ڵ�ȿ��� �ٷ� �����\
�Լ��� ������ ������. �ڷ����� �ʿ䰡 ����.
#define SUM(x, y)	(x + y)
#define SQUARE1(x)	x * x

void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	std::cout << SQUARE(10 + 11) << std::endl;
	std::cout << SQUARE1(10 + 11) << std::endl; // ���� ���� �ٸ�\
	10 + 11 * 10 + 11�� �ν��ؼ� ()�� �� ���־����.
	return 0;
}