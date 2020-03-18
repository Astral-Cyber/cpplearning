#include<iostream>
#include "TimeClass.h"


//::�������������������ʾinitTime����TimeClass��
void TimeClass::initTime(int tmphour, int tmpminute, int tmpsecond)
{
	Hour = tmphour; 
	Minute = tmpminute;
	Second = tmpsecond;
	initMillSecond(0);
}

void TimeClass::initMillSecond(int mls)
{
	MillSecond = mls;
}

TimeClass::TimeClass(int tmphour, int tmpminute, int tmpsecond)
{
	Hour = tmphour;
	Minute = tmpminute;
	Second = tmpsecond;
	initMillSecond(0);
	std::cout << "����TimeClass::TimeClass(int tmphour, int tmpminute, int tmpsecond)���캯��" << std::endl;
}

TimeClass::TimeClass()
{
	Hour = 12;
	Minute = 59;
	Second = 58;
	initMillSecond(0);
	std::cout << "����TimeClass::TimeClass()���캯��" << std::endl;
}

TimeClass::TimeClass(int tmphour)
{
	Hour = tmphour;
	Minute = 59;
	Second = 58;
	initMillSecond(0);
	std::cout << "����TimeClass::TimeClass(int tmphour)���캯��" << std::endl;
}