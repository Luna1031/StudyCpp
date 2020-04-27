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
		printf("이름 =%s, 나이=%d \n", name, age);
	}
};

class Boxer : public Human
{
protected:
	int height;
	int weight;
public:
	Boxer(const char* aname, int aage, int aheight, int aweight) : Human(aname, aage)
	{
		height = aheight;
		weight = aweight;
	}
	void intro()
	{
		printf("키 %d, 몸무게 %d의 복서 %s입니다. \n", height, weight, name);
	}
	void fight()
	{
		puts("레프트, 라이트, 잽쨉");
	}
};
/*
int main()
{
	Boxer Lee("이예은", 28, 160, 45);
	Lee.intro();
	Lee.fight();
}
*/