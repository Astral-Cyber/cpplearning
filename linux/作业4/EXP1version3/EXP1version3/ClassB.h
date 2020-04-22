#ifndef _CLASSB_H_
#define _CLASSB_H_

#include<iostream>
#include<fcntl.h>
#include<unistd.h>

class ClassB
{
public:
	char x;
	char y;
public:
	ClassB();
	explicit ClassB(char i, char j);
	~ClassB();
public:
	bool Serialize(int fd)const;
	bool Deserialize(int fd);
	void PrintObject();
	int getType() {
		return 2;
	}
};


#endif // !_CLASSB_H_


