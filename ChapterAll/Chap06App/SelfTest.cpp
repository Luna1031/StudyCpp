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
		printf("�̸� =%s, ����=%d \n", name, age);
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
		printf("Ű %d, ������ %d�� ���� %s�Դϴ�. \n", height, weight, name);
	}
	void fight()
	{
		puts("����Ʈ, ����Ʈ, ��µ");
	}
};
/*
int main()
{
	Boxer Lee("�̿���", 28, 160, 45);
	Lee.intro();
	Lee.fight();
}
*/