#include<iostream>
#include"head.h"
using namespace std;


//��ͽṹ�����ѧϰ

//student.cpp
//struct student {//�ṹ����ȱʡ��public����
//	//��Ա����
//	int number;
//	char name[100];
//	void func()
//	{
//		number++;
//		return;
//	}
//};

//void func(student temp)//�β��ýṹ����
//void func(student &temp)//����
//{
//	temp.number = 2000;
//	strcpy_s(temp.name, sizeof(temp.name), "who");
//	return;
//}
//void func1(student *temp)//ָ��ṹ���ָ��
//{
//	temp->number = 2000;
//	strcpy_s(temp->name, sizeof(temp->name), "who");
//	return;
//}



//��������

//inline int myfunc(int testv) //��������ǰ��inline����������
//{
//	return 1;
//}
//
//constexpr int a()
//{
//	//�����ر��
//}


//��������÷�

//void func1()
//{
//
//}
//
//void func2()
//{
//	//return;
//	return func1();//this is ok
//}



//����ָ�������

//int *myfunc()
//{
//	int tempvalue = 9;
//	return &tempvalue; //this is ����
//	//����ִ����һhi��tempvalue����ڴ��Ѿ���ϵͳ����
//}

//int &myfunc()
//{
//	int tempvalue = 9;
//	cout << &tempvalue << endl;
//	return tempvalue;//�޴�����
//}

//
//int myfunc(void)
//{
//	return 1;
//}


int main()
{
	//student student1;//����ṹ����
	//student1.number = 1001;
	//strcpy_s(student1.name,sizeof(student1.name),"zhangsan");

	//cout << student1.number << endl;
	//cout << student1.name << endl;
	////func(student1);//Ч�ʵͣ���Ϊʵ�δ��ݸ��β�ʱ�������ڴ����ݿ���
	////func1(&student1);

	//student1.func();//���ó�Ա����

	//cout << student1.number << endl;
	//cout << student1.name << endl;

	//cpp�нṹ��c�еĽṹ����
	//c++�еĽṹ��չ��������ӳ�Ա����(����)

	//��ѧϰ
	//c++����һ�����ڸ���ı��������ǽж���
	//c++���ڲ��ĳ�Ա�����ͺ�����Ĭ�Ϸ��ʼ�����private
	//c++�ṹ��̳�Ĭ����public,��̳�Ĭ����private

	//�����֯����д�淶
	//��Ķ���������һ��.h�ļ���,ͷ�ļ����Ը�������ͬ
	//��ľ���ʵ�ִ��룬����һ��.cpp�ļ���



	//��������
	//�ں�������ǰinline
	//�������С�����ú�Ƶ��
	//1.inlineӰ�������������׶Σ�ϵͳ���Խ����øú����Ķ����滻Ϊ�������壬����������
	//int a = myfunc(5); //int a = 1;
	//cout << a << endl;
	//2.inlineֻ�ǿ����߶Ա��������飬ȡ���ڱ�������Ϲ���
	//3.���������Ķ������ͷ�ļ��С�������Ҫ�õ��������������.cpp�ļ�����ͨ��#inlcude�������������Դ���� #include""����
	//�Ա��ҵ������������Դ���벢�滻
	
	//��ȱ��
	//�������ͣ������������������御��С


	//��������÷�
	//1.������������Ϊvoid,��ʾ�����������κ����͡�
	//�������ǿ��Ե���һ������������void�ĺ�����������Ϊ��һ������������void�ĺ���
	
	//2.��������ָ�������
	//int *p = myfunc();
	//*p = 6;//��һ���������Լ����ڴ渳ֵ���������

	//int&k = myfunc();
	//cout << &k << endl;
	//k = 10;//��һ���������Լ����ڴ渳ֵ���������

	//int k = myfunc();
	//cout << &k << endl;
	//k = 10; //��ȫ

	//3.û���βο��Ա����β��б�Ϊ��(),����int myfunc(void)

	//4.���һ�����������ã�����ֻ����������

	//5.��ͨ����ֻ�ܶ���һ�Σ�����.cpp�ļ������������Զ��
	//һ�㺯���������ڵ�.cpp�ļ���#include�������ڵ�.h�ļ�
	
	//6.void func(int &a ,int &b)��c++��ϰ��ʹ���������͵��β�ȡ��ָ�����͵ĵ��β�


	//7.c++����������ͬ���������β��б�Ĳ������ͺ�����Ӧ�������Բ�ͬ


	//const char* �� char const * ��char * const����
	
	//const char *p;
	
	//char str[] = "i hello world!" ;  //char str[]{ "hello world!" };
	//const char *p;//pָ���Ŀ�겻��ͨ��p���޸�
	//p = str;
	////*p = 'y';//�﷨����
	//p++;
	//str[0] = 'y';


	//char const *p �ȼ��� const char *p

	////char * const
	//char str[] = "i helle world";
	//char * const p = str;    //����ʱ������ʼ��
	//    //pָ��һ�������Ժ󣬾Ͳ�����ָ����������
	////p++;//����
	//*p = 'Y';    //���ǿ����޸�pָ���Ŀ���е�����
	//
	//const char * const p = str;   //�ȼ�����һ�е�����д��
	//char const * const p = str;
	//     //pָ���ܱ䡣pָ�������Ҳ���ܸı䡣
	//
	//int i = 100;
	//const int &a = i;    //����a�����ݲ���ͨ��a�Լ��޸�
	//i = 100;
	////a = 500;//error

	////int &b = 31;//error
	//const int &b = 31;//�������ڴ�
	//cout << b << endl;


	//�����β��д�const
	
	return 0;
}