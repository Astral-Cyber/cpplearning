#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct student {
	int num;
};

int func()
{
	//vector�ܰ���������װ���������Ա���Ϊ������
	vector<int> vjihe;//vijihe��߱���int�����ݣ�int �Ͷ���
	//<int>��ģ�壬vector��������ģ�壬<int>ʵ������ģ��ʵ�����Ĺ���
	//
	vector<student>studentlist;

	vector<vector<string>> str;

	vector<int*> v2;
	//vector<int &> v3;//����

	//����ͳ�ʼ��vector����
	vector<string> my_str;//����һ��string���͵Ŀյ�vector����������
	my_str.push_back("abcde");
	my_str.push_back("dfs");
	//������ʼ��
	vector<string> my_str2(my_str);//��my_strԪ�ؿ�������my_str2
	vector<string> my_str3 = my_str;//��my_strԪ�ؿ�������my_str3

	//c++11,�����б��ʼ��
	vector<string>my_str4 = { "adv","sdf","dsf" };

	//����ָ��������Ԫ�أ�һ����()
	vector<int> jihe(15, -200);//����15��int����Ԫ�أ�ÿ��Ԫ��ֵ-200
	vector<string> jihe2(5, "hello");//����5��string���͵�Ԫ�أ�ÿ��Ԫ����hello

	vector<int>ijihe1(20);//20��Ԫ�أ�[0],[1] .. [19]ÿ����0
	vector<string>ijihe2(5);//5��Ԫ�أ�ÿ��""

	//���ֳ�ʼ����ʽ
	vector<int> i1(10);//��ʾ10��Ԫ�أ�ÿ��Ԫ����ȱʡ��0
	vector<int> i2{ 10 };//��ʾ��һ��Ԫ�أ���Ԫ��ֵΪ10
	vector<string> snor{ "hello" };//һ��Ԫ�أ����ݣ�hello
	vector<string> str0{ 10 };//10��Ԫ��,ÿ��Ԫ��""
	vector<string> str2{ 10, "hello" };//10��Ԫ�أ�ÿ��Ԫ��������"hello"��
	vector<int>i3(10, 1);//10��Ԫ�أ�ÿ��Ԫ��ֵΪ1;
	vector<int>i4{ 10,1 };//2��Ԫ�أ���һ��Ԫ����10���ڶ���Ԫ����1
	//ͨ��{}��ʼ����{}��ߵ�ֵ���ͱ����vector���<>������ͬ

	return 0;
}