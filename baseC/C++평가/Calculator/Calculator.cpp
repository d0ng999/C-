//author 홍동현
#include "Calculator.h"
double Calculator::Calculate(string str) // 멤버범수 정의
{
	num.clear();
	cper.clear();
	stringstream ss(str); // stringstream ss에 str 값을 저장
	double Num_obj; // 숫자 변수
	char Char_obj; // 문자형 변수

	while (ss >> Num_obj) // ss 문자열 안에 숫자가 없을 때까지 실행
	{
		num.push_back(Num_obj); // num이라는 vector 가변객체에 숫자를 저장
		if (ss >> Char_obj) // ss 문자열안에 문자가 없을 때까지 실행
		{
			cper.push_back(Char_obj); // cper - vector 가변객체에 문자를 저장
		}
	}
	num.shrink_to_fit();
	cper.shrink_to_fit();


	double res = num[0];
	char cres = cper[0];

	if (cper[0] >= 42 and cper[0] <= 47) 
	// 아스키코드로 문자가 42부터 47이하가 아니면 오류
	{
		if (cper[0] == '+')
		{
			cout << "결과 값 : " << num[0] + num[1] << endl;
			return num[0] + num[1];
		}
		else if (cper[0] == '-')
		{
			cout << "결과 값 : " << num[0] - num[1] << endl;
			return num[0] - num[1];
		}
		else if (cper[0] == '*')
		{
			cout << "결과 값 : " << num[0] * num[1] << endl;
			return num[0] * num[1];
		}
		else if (cper[0] == '/')
		{
			if (num[1] == 0)
			{
				cout << "0으로 나눌 수 없습니다." << endl;
				return 0;
			}
			else
			{
				cout << "결과 값 : " << num[0] / num[1] << endl;
				return num[0] / num[1];
			}
		}
	}
	else
	{
		cout << "부호를 다시 입력하세요" << endl;
		return 0;
	}
}


