#include<iostream>
using namespace std;

//student.cpp
struct student {//�ṹ����ȱʡ��public����
	//��Ա����
	int number;
	char name[100];
	void func()
	{
		number++;
		return;
	}
};

//void func(student temp)//�β��ýṹ����
//void func(student &temp)//����
//{
//	temp.number = 2000;
//	strcpy_s(temp.name, sizeof(temp.name), "who");
//	return;
//}
void func1(student *temp)//ָ��ṹ���ָ��
{
	temp->number = 2000;
	strcpy_s(temp->name, sizeof(temp->name), "who");
	return;
}

int main()
{
	student student1;//����ṹ����
	student1.number = 1001;
	strcpy_s(student1.name,sizeof(student1.name),"zhangsan");

	cout << student1.number << endl;
	cout << student1.name << endl;
	//func(student1);//Ч�ʵͣ���Ϊʵ�δ��ݸ��β�ʱ�������ڴ����ݿ���
	//func1(&student1);

	student1.func();//���ó�Ա����

	cout << student1.number << endl;
	cout << student1.name << endl;

	//cpp�нṹ��c�еĽṹ����
	//c++�еĽṹ��չ��������ӳ�Ա����(����)

	//��ѧϰ
	//c++����һ�����ڸ���ı��������ǽж���
	//c++���ڲ��ĳ�Ա�����ͺ�����Ĭ�Ϸ��ʼ�����private
	//c++�ṹ��̳�Ĭ����public,��̳�Ĭ����private

	//�����֯����д�淶
	//��Ķ���������һ��.h�ļ���,ͷ�ļ����Ը�������ͬ
	//��ľ���ʵ�ִ��룬����һ��.cpp�ļ���
	return 0;
}