#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
	int id;
	int age;
public:
	Human(const char* aname, int aid, int aage)
	{
		name = new char[strlen(aname) + 1];
		//strcpy_s(name, aname);
		id = aid;
		age = aage;
	}

	~Human() 
	{
		delete[] name;
	} // ¼Ò¸êÀÚ

	void get()
	{
		cout << "ÀÌ¸§ : " << name << " " << "ÁÖ¹ø : " << id << " " << "³ªÀÌ : " << age << endl;
	}
};

int main()
{
	Human h("È«µ¿Çö", 21, 21);
	h.get();

	Human hary[3] = { Human("±è¿µÈñ", 2, 23),
					  Human("±èÃ¶¼ö", 6, 12),
					  Human("´ó´óÀÌ", 5, 1) };
	hary[0].get();
	hary[1].get();
	hary[2].get();
		
	return 0;
}