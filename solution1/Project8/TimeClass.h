
#ifndef _MYTIME_
#define _MYTIME_

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
	const int ctestvalue;

	mutable int testvalue;


	void initTime(int tmphour, int tmpminute, int tmpsecond);
public:
	//���캯��
	explicit TimeClass(int tmphour, int tmpminute, int tmpsecond = 12);

	explicit TimeClass(int tmphour);

	TimeClass();
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