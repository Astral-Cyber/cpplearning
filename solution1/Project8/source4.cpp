#include<iostream>
#include"Time2.h"
#include"TimeClass.h"

using namespace std;


int main()
{
	//�������캯��
	//Ĭ������£������Ŀ�����ÿ����Ա�����������
	//���һ����Ĺ��캯���ĵ�һ�����������������������á���������������������ô��Щ�����������Ĭ��ֵ����������������������캯��
	//����Ĭ�ϲ���������ں��������У����Ǹú���û�к�������
	//��������������:����һ����ʱ������ϵͳ����
	TimeClass myTime;//����Ĭ�Ϲ��캯��
	cout << endl;
	TimeClass myTime2 = myTime;
	TimeClass myTime3(myTime);
	TimeClass myTime4{ myTime };
	TimeClass myTime5 = { myTime };
	
	//TimeClass myTime6;
	//myTime6 = myTime5;
	


	return 0;
}