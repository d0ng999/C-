//author 홍동현
#pragma once
#include <iostream>
#include <vector>
#include <sstream>
using namespace std; 

class Calculator // 클래스 선언
{
private:
	vector<double> num; // vector 가변객체(double 형)
	vector<char> cper; // vector 가변객체(char 형)
public:
	double Calculate(string str); // 멤버 함수
};