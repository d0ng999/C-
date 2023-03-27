#include <iostream>

class Myclass
{
	int num;
public:
	Myclass(int n) : num(n) {
		std::cout << "생성자 호출" << std::endl;
	}
	Myclass(Myclass& other)// 참조형태라서 &쓰기
	{
		std::cout << "복사생성자 호출" << std::endl;
		num = other.num;
	}

	void getData()
	{
		std::cout << num << std::endl;
	}

};

int main()
{
	Myclass m1(10); // 생성자 호출
	Myclass m2 = m1; // 복사생성자 호출 int num2 = num1
	Myclass m3(m2); // 복사생성자 호출

	m1.getData();
	m2.getData();
	m3.getData();
	return 0;
}