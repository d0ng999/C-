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
	Myclass(char* aid, int aage, const char* aname); // 생성자 원형
	void get(); // 메소드 원형
};

//Myclass::Myclass(char* aid, int aage, const char* aname) // 생성자 정의
// 생성자가 호출되고 난 후에 아래의 것들이 실행이 된다
//{
//	id = aid;
//	age = aage;
//	strcpy_s(name, 10, aname);
//}

Myclass::Myclass(const char* aname) : id(aid),age(aage) // 이런형태로 하면 \
생성자 호출될 때, 바로 실행이 된다.  ->^^, 그래서 생성자 머리에 작성한다.
{
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::get()
{
	cout << id << name << age << endl;
}

int main()
{
	Myclass hong("123", 22, "홍동현"); // 클래스에 대한 변수 선언이 먼저!!
	hong.get();

	return 0;
}