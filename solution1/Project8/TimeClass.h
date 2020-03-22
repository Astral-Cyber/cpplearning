
#ifndef _MYTIME_
#define _MYTIME_
#include<iostream>

class Tmpclass
{
public:
	Tmpclass()
	{
		std::cout << "����Tmpclass�Ĺ��캯��" << std::endl;
	}
	Tmpclass(Tmpclass &tmpclass)
	{
		std::cout << "������Tmpclass��Ŀ������캯�� "<< std::endl;
	}
};

class TimeClass
{
private:
	int MillSecond;
private:
	void initMillSecond(int mls);
public:
	int Hour;
	int Minute;
	//int Second;
	//int Second = 0;
	int Second = { 0 };
	const int ctestvalue =80;

	mutable int testvalue;


	void initTime(int tmphour, int tmpminute, int tmpsecond);
public:
	//���캯��
	TimeClass(int tmphour, int tmpminute, int tmpsecond = 12);


	explicit TimeClass(int tmphour);

	TimeClass();

	//�������캯��
	TimeClass(const TimeClass&tmptime, int a = 50);

	//Tmpclass cl;


public:


	void addhour(int tmphour) const;
	void noone() {};
	void noone2() const {
		testvalue = 12;
	};


public:
	//�Ѷ����Լ�����ȥ
	TimeClass& add_hour(int tmphour);
	TimeClass& add_minute(int tmpminute);

	static int mystatic;//�����������������ʼ��
	static void mstafunc(int testvalue);
	
};

void WriteTimeClass(TimeClass &mytime);

#endif