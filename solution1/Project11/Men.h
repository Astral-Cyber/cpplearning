#pragma once
#include"Human.h"
class Men:public Human //��ʾMen��Human������
//class Men:protected Human
//class Men:private Human
{
public:
	Men();
	~Men();

public:
	void samenamefunc(int);

	void funcmen() {};

	virtual void eat() override;

	virtual void eat2() 
	{
		std::cout << "men::eat2()" << std::endl;
	};

public:
	using Human::samenamefunc;
private:
	void funcmen() const{
		std::cout << "test" << std::endl;
	}

	//��Ϊ��Ԫ�������������Ա����һ��Ԫ������������public,private,protected����
	friend void func(const Men &tempmen);//�ú�������Ԫ����
};

