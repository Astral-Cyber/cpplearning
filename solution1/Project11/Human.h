#pragma once
#include<iostream>
class Human
{
public:
	Human();
	Human(int);
	virtual~Human();
public:
	int m_Age;
	char m_Name[100];
	void funchuman() {};
	void funcpub() 
	{
		std::cout << "ִ����Human::funcpub() " << std::endl;
	};

	//�������麯��
	virtual void eat();

	virtual void eat2() = 0;//���麯����û�к����壬ֻ��һ����������

	


public:
	void samenamefunc();
	void samenamefunc(int);
protected:
	int m_prol;
	void funcpro() 
	{
		std::cout << "ִ����Human::funcpro()" << std::endl;
	};
private:
	int m_priv1;
	void funcpriv();
};

