#include<iostream>
#include"TimeClass.h"
using namespace std;

class student {
public:
	char name[100];
	int number;
};

void func(int a, int b = 12)
{
	return;
}

void func1(TimeClass myt)
{

}
int main()
{
	//func(6);
	//func(12, 18);


	//���������ֽڶ�����������ͣ������ͣ�
	//�����ʱҪ���ǽǶ�
	//1.����ߺ�ʵ����
	//2.վ��ʹ����
	//3.���࣬����

	//�����û��ֽڶ�����������ͣ����������һ�������ռ�
	//һ���๹����Ҫ����Ա��������Ա����������������Ա������
	//
	//student someone;
	//someone.number = 1000;
	//student *psomeone = &someone;
	//psomeone->number = 1005;

	//cout << someone.number << endl;

	//TimeClass mytime;
	//mytime.initTime(11, 14, 15);
	//cout << mytime.Hour << endl;
	//cout << mytime.Minute << endl;
	//cout << mytime.Second << endl;

	//���󿽱�
	//
	//TimeClass myTime;
	/*myTime.Hour = 12;
	myTime.Minute = 15;
	myTime.Second = 40;

	TimeClass myTime2 = myTime;
	TimeClass myTime3(myTime);
	TimeClass myTime4{ myTime };
	TimeClass myTime5 = { myTime };
	myTime5.Hour = 8;*/

	//TimeClass myTime;
	//myTime.Hour = 15;
	//cout << myTime.Hour << endl;
	//cout << myTime.Minute << endl;
	//cout << myTime.Second << endl;

	//�����У���һ������ĳ�Ա���������ֺ�������ͬ�������ڴ�����Ķ���ʱ��
	//�������ĳ�Ա�����ᱻϵͳ�Զ����ã������Ա���������������캯����
	//���캯����Ŀ���ǳ�ʼ��������ݳ�Ա

	//1)���캯��û�з���ֵ
	//2)�������ֹ����ù��캯���������������
	//3����������¹��캯��Ӧ�ñ�����Ϊpublic
	//���Ǵ���һ������ʱ��Ҫ�����ǵ��ù��캯������˵�����캯������һ��public���������ܹ���ϵͳ����磩����
	//��Ϊ��ȱʡ�ĳ�Ա��˽�г�Ա���������Ǳ����������캯����һ��public�����������޷���������Ķ���
	//4�����캯��������ж�������������Ǵ��������ʱ��ҲҪ������Щ����

	//TimeClass myTime = TimeClass(12, 12, 52);
	//TimeClass myTime2(12,13,52);
	//TimeClass myTime3 = TimeClass(12, 13, 52);
	//TimeClass myTime4{ 12,13,53 };
	//TimeClass myTime5 = {12,13,52};

	////TimeClass myTime6();
	////TimeClass myTime7(12,13);

	////������캯��
	////һ�����п����ж�����캯��������Ϊ�����Ĵ����ṩ���ֳ�ʼ������
	////���Ƕ�����캯����Ҫ�е㲻һ���ĵط�

	//TimeClass myTime10 = TimeClass();
	//cout <<"1"<< endl;
	//TimeClass myTime11();
	//cout <<"1"<< endl;
	//TimeClass myTime12 = TimeClass();
	//TimeClass myTime13{};
	//TimeClass myTime14 = {};

	////���󿽱�
	////����4������û�е��ô�ͳ�����ϵĹ��캯�������ǵ��õ��ǿ������캯��
	//TimeClass myTime15 = myTime10;
	//TimeClass myTime16 = (myTime10);
	//TimeClass myTime17{ myTime10 };
	//TimeClass myTime18 = {myTime10};

	//����Ĭ�ϲ���
	//�涨��
	//1��Ĭ��ֵֻ�ܷ��ں��������У����Ǹú���û������
	//2���ھ��ж�������ĺ�����ָ��Ĭ��ֵ��Ĭ�ϲ�����������ڲ�Ĭ�ϲ������ұ�
	//һ��ĳ��������ʼָ��Ĭ��ֵ�����ұߵĲ�������ָ��Ĭ��ֵ
	/*TimeClass myTime19 = TimeClass(12, 12);
	TimeClass myTime20(12, 13);
	TimeClass myTime21 = TimeClass(12, 13);
	TimeClass myTime22{ 12,13 };
	TimeClass myTime23 = { 12,13};*/


	//��ʽת����explicit
	//
	//TimeClass myTime40 = 14;//�������и���Ϊ����14ת������TimeClass�����Ͷ��� //�����˵������Ĺ��캯��
	//TimeClass myTime41 = (12, 13, 14, 15, 16);//�����˵������Ĺ��캯��

	//func1(16);//16��ת������һ����ʱ��Time���󣬵���func1�ĵ����ܹ��ɹ�
	//�����˵������Ĺ��캯��

	//TimeClass myTime100 = { 16 };
	//��Ϊ��д����������һ������16��������ϵͳ��ȷ��֪�������ĸ����캯��

	//TimeClass myTime101 = 16;
	//���������д�����ʹ�����ʱ������ʽת��

	//func1(16);//Ҳ�Ǻ������д�����ʹ�����ʱ������ʽת��

	//������캯�������д���explicit,��������캯��ֻ�����ڳ�ʼ������ʾ����ת��

	/*TimeClass myTime = TimeClass(12, 12, 52);
	TimeClass myTime2(12,13,52);
	TimeClass myTime3 = TimeClass(12, 13, 52);
	TimeClass myTime4{ 12,13,53 };*/
	//TimeClass myTime5 = {12,13,52}; //��ʽ����ת��//error
	//�����б��ʼ�����ܱ�עΪ����ʾ���Ĺ��캯��

	TimeClass myTime100 = { 16 };
	TimeClass myTime101 = 16;
	func1(16);


	return 0;
}