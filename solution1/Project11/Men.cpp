#include "Men.h"
#include<iostream>

Men::Men()
{
	//funcpro();
	//std::cout << "ִ����men::men()" << std::endl;
}



void Men::samenamefunc(int)
{
	Human::samenamefunc(12);//���ø�����ε�
	Human::samenamefunc();//���ø��಻����
	std::cout << "ִ���� Men::samenamefunc(int)" << std::endl;
}