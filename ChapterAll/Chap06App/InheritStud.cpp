#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	void intro()
	{
		printf("이름 :%s, 나이 :%d \n", name, age);
	}
};

class Student : public Human
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage)
	{
		stunum = astunum;
	}
	void study()
	{
		printf("구구단 \n");
	}
};
/*
int main()
{
	Human Lee("이예은", 29);
	Lee.intro();
	Student Seo("서현욱", 30, 0730);
	Seo.intro();
	Seo.study();
}
*/
