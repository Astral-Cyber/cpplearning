
#ifndef _MYTIME2_
#define _MYTIME2_
class Otherclass
{
public:
	Otherclass(int) {};
};

class Time2
{
public:
	//explicit Time2();
	
	//Tim2(int) {};


	//Time2() {};
	//Time2() = default;//�����ܹ�Ϊ���� =default�ĺ����Զ����ɺ�����

	//int pfunc() = default; //�����⺯��������ʹ�� = default

	//Time2() = delete;//�ó���Ԫ��ʾ�Ľ���ĳ������
public:
	int Hour;
	int Minute;
	int Second{0};

	//Otherclass oc1;
};
#endif // !_MYTIME2_

