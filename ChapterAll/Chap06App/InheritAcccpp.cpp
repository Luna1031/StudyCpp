#include <stdio.h>
#include <string.h>

class Human
{
protected:
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
protected:
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
	void report()
	{
		printf("이름 :%s, 학번 :%d, 보고서 제출합니다. \n", name, stunum);
	}
};
/*
int main()
{
	
	Student Lee("이예은", 28, 20123166);
	Lee.intro();
	Lee.study();
	Lee.report();
}	
*/
