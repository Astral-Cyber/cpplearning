
#ifndef _MYTIME_
#define _MYTIME_
#include<iostream>

class Tmpclass
{
public:
	Tmpclass()
	{
		std::cout << "调用Tmpclass的构造函数" << std::endl;
	}
	Tmpclass(Tmpclass &tmpclass)
	{
		std::cout << "调用了Tmpclass类的拷贝构造函数 "<< std::endl;
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
	//构造函数
	TimeClass(int tmphour, int tmpminute, int tmpsecond = 12);


	explicit TimeClass(int tmphour);

	TimeClass();

	//拷贝构造函数
	TimeClass(const TimeClass&tmptime, int a = 50);

	//Tmpclass cl;


public:


	void addhour(int tmphour) const;
	void noone() {};
	void noone2() const {
		testvalue = 12;
	};


public:
	//把对象自己返回去
	TimeClass& add_hour(int tmphour);
	TimeClass& add_minute(int tmpminute);

	static int mystatic;//声明，不能在这里初始化
	static void mstafunc(int testvalue);
	
};

void WriteTimeClass(TimeClass &mytime);

#endif