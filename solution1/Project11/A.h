#pragma once
#include"C.h"

//class C;//������ʾ��C����

class A
{
	friend void C::callCAF(int x, A &a);//�ú�������Ԫ��Ա����������
private:
	int data;
	
};