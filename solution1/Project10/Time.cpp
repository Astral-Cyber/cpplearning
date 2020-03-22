#include "Time.h"
#include<iostream>


Time::Time(int tmphour, int tmpminute, int tmpsecond):Hour(tmphour),Minute(tmpminute), Second(tmpsecond)
{
	std::cout << "����Time::Time(int tmphour, int tmpminute, int tmpsecond)���캯��" << std::endl;
}

Time::Time(int tmphour)
{
	std::cout << "����Time::Time(int tmphour)���캯��" << std::endl;
}

Time::Time()
{
	std::cout << "����Time::Time()���캯��" << std::endl;

	p = new char[100];
}

Time::Time(const Time&tmptime, int a):Hour(50),Minute(40)
{
	std::cout << "����Time::Time(const Time&tmptime, int a)�������캯��" << std::endl;
}

//��ֵ���������
Time& Time:: operator =(const Time& tmpobj)
{
	Hour = tmpobj.Hour;
	Minute = tmpobj.Minute;
	Second = tmpobj.Second;
	//...

	std::cout << "����Time& Time:: operator =(const Time& tmpobj)��ֵ���������" << std::endl;
	return *this;//�Ѷ���������ȥ
}

Time::~Time()
{
	delete[] p;
	std::cout << "������Time::~Time()��������" << std::endl;
}