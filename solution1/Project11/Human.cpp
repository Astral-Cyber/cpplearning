#include "Human.h"

Human::Human()
{
	std::cout << "执行了Human::Human()" << std::endl;
}

Human::Human(int abc)
{
	std::cout << "执行了Human::Human(int)" << std::endl;
}

void Human::samenamefunc()
{
	std::cout << "执行了 Human::samenamefunc()" << std::endl;
}

void Human::samenamefunc(int)
{
	std::cout << "执行了 Human::samenamefunc(int)" << std::endl;
}