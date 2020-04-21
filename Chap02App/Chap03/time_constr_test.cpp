#include <stdio.h>

class Time
{
private:
	int hour, min, sec;
public:
	// 생성자1
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	// 생성자2
	Time(int abssec)
	{
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime()
	{
		printf("현재 시각 %d:%d:%d \n", this->hour, this->min, this->sec);
	}
};

int main()
{
	Time now(17, 14, 24);
	now.OutTime();
	Time noon(44000);
	noon.OutTime();
}