#include "Human.h"

Human::Human()
{
	std::cout << "ִ����Human::Human()" << std::endl;
}

Human::Human(int abc)
{
	std::cout << "ִ����Human::Human(int)" << std::endl;
}

void Human::samenamefunc()
{
	std::cout << "ִ���� Human::samenamefunc()" << std::endl;
}

void Human::samenamefunc(int)
{
	std::cout << "ִ���� Human::samenamefunc(int)" << std::endl;
}

void Human::eat()
{
	std::cout << "����Ը�����ʳ" << std::endl;
};

Human::~Human()
{
	std::cout<<"ִ����Human::~Human()" << std::endl;
}