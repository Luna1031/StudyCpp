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
		printf("이름 = %s, 나이 = %d \n", name, age);
	}
};

int main()
{
	Human kim("김명화", 48);
	kim.intro();
}