#include "Men.h"
#include<iostream>

Men::Men()
{
	//funcpro();
	std::cout << "ִ����Men::Men()" << std::endl;
}



void Men::samenamefunc(int)
{
	Human::samenamefunc(12);//���ø�����ε�
	Human::samenamefunc();//���ø��಻����
	std::cout << "ִ���� Men::samenamefunc(int)" << std::endl;
}

void Men::eat()
{
	std::cout << "����ϲ�����׷�" << std::endl;
};

Men::~Men()
{
	std::cout << "ִ����Men::~Men()" << std::endl;
}


