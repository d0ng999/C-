#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}		
}

int main(void)
{
	using Hybrid::HybFunc; 
	// using 키워드를 쓰면 Hybrid 네임스페이스 안에 있는 \
	HybFunc 함수를 아래와 같이 그냥 쓸 수 있다.
	HybFunc();
	return 0;
}