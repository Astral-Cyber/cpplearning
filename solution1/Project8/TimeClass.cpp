#include<iostream>
#include "TimeClass.h"

int TimeClass::mystatic = 15;

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
	:Hour(tmphour), Minute(tmpminute), Second(tmpsecond), MillSecond(0), ctestvalue(80)//���캯����ʼ���б�
{
	/*Hour = tmphour;
	Minute = tmpminute;
	Second = tmpsecond;
	initMillSecond(0);*/

	std::cout << "����TimeClass::TimeClass(int tmphour, int tmpminute, int tmpsecond)���캯��" << std::endl;
}

//TimeClass::TimeClass():ctestvalue(80)
//{
//	Hour = 12;
//	Minute = 59;
//	Second = 58;
//	initMillSecond(0);
//	std::cout << "����TimeClass::TimeClass()���캯��" << std::endl;
//}

TimeClass::TimeClass(int tmphour):ctestvalue(80)
{
	Hour = tmphour;
	this->Hour = 12;
	Minute = 59;
	Second = 58;
	initMillSecond(0);
	std::cout << "����TimeClass::TimeClass(int tmphour)���캯��" << std::endl;
}

void TimeClass::addhour(int tmphour)const 
{
	//Minute = tmphour;//error
}

TimeClass& TimeClass::add_hour(int tmphour)
{
	Hour += tmphour;

	this->Hour;
	return *this;//�Ѷ����Լ�����ȥ
}

TimeClass& TimeClass:: add_minute(int Minute)
{
	this->Minute += Minute;
	return*this;
}

void TimeClass::mstafunc(int testvalue)
{
	//Minute = 12; //error
	mystatic = testvalue;//ok
}

//��ͨ���������ǳ�Ա����
void WriteTimeClass(TimeClass &mytime)
{
	std::cout << mytime.Hour << std::endl;
}


TimeClass::TimeClass(const TimeClass&tmptime, int a):ctestvalue(80),Hour(50),Minute(40)
{
	std::cout << "����TimeClass::TimeClass(TimeClass&tmptime, int a)�������캯��" << std::endl;
}