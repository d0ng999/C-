
#include <iostream>

int main(void)					// �Լ� �Ӹ� : ��� �Լ��̸� main(�Է�)
// ����(int), ����(char), ���ڿ�(str) ��..\
void main()�� ���� return 0 �ʿ����, int main(void)�� �ʿ���.
{										// �Լ� ����
	int num = 20;				
	// std�� namespace, cout�� std namespace�ؿ� �ִ� ��ɾ�
	std::cout << "Hello World" << std::endl; // endl�� \n�� ����
	std::cout << num << std::endl;
	std::cout << num << "A";
	std::cout << "BC" << std::endl;
	return 0;						// return 0; // ���� - �Լ��� ���� ���ٴ� ���� �ǹ�
}										// �Լ� ��
