#include <stdio.h>

class Time
{
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s)
	{
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const
	{
		printf("현재 시간은 %d:%d:%d입니다. \n", hour, min, sec);
	}
};
/*
int main()
{
	Time now(11, 10, 11);
	now.SetTime(11, 11, 11);
	now.OutTime();

	const Time meeting(16, 00, 00);
	meeting.OutTime();
}
*/