#pragma once
#include<iostream>
class Human
{
public:
	Human();
	Human(int);
public:
	int m_Age;
	char m_Name[100];

	void funcpub() 
	{
		std::cout << "ִ����Human::funcpub() " << std::endl;
	};
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

