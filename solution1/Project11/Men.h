#pragma once
#include"Human.h"
class Men:public Human //��ʾMen��Human������
//class Men:protected Human
//class Men:private Human
{
public:
	Men();

public:
	void samenamefunc(int);

public:
	using Human::samenamefunc;
};

