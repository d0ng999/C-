//author ȫ����
#pragma once
#include <iostream>
#include <vector>
#include <sstream>
using namespace std; 

class Calculator // Ŭ���� ����
{
private:
	vector<double> num; // vector ������ü(double ��)
	vector<char> cper; // vector ������ü(char ��)
public:
	double Calculate(string str); // ��� �Լ�
};