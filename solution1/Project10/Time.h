#pragma once
class Time
{
public:
	int Hour;
	int Minute;
	int Second = 10;


	char *p;
public:
	//���캯��
	Time(int tmphour, int tmpminute, int tmpsecond = 12);
	explicit Time(int tmphour);
	Time();

	//�������캯��
	Time(const Time&tmptime, int a = 50);


	Time & operator =(const Time& tmpobj);//���صĸ�ֵ�����

	~Time();
};

