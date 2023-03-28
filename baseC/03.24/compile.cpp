#include <iostream>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지

class Myclass 
{
	
private: // 멤버변수 : 속성
	char* id; // 변경이 불가능, 무한한 공간, 동적 할당
	int age;
	char name[10]; //  변경 가능, 한정된 공간, 정적 할당(기본)
	
public: // 멤버함수 (=메소드) : 기능
	void set(char* aid, int aage, const char* aname);

	void get();
	
};

// set, get 함수를 class에서 따로 빼도 된다. 대신 함수 입력은 동일하게
void Myclass::set(char* aid, int aage, const char* aname)
// 함수에 들어갈 변수를 선언해줘야한다
{
	id = aid;
	age = aage;
	strcpy_s(name,10, aname);
}

void Myclass::get()
{
	cout << id << name << age << endl;
}

int main()
{
	Myclass a; // 클래스에 대한 변수 선언이 먼저!!
	a.set("123", 22, "홍동현");
	a.get();

	return 0;
}