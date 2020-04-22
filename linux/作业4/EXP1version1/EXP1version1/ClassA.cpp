#include "ClassA.h"
using namespace std;
ClassA::ClassA() {
	i = 0;
}
ClassA::ClassA(int i) {
	this->i = i;
}
ClassA::~ClassA() {

}

bool ClassA::Serialize(const char* pFilePath)
{
	int fd = open(pFilePath, O_RDWR | O_CREAT | O_TRUNC, 0666);
	//O_RDWR ����д��
	//O_CREAT �����ļ��������򴴽�����ʹ�ô�ѡ��ʱ��Ҫ��3������mode
	//O_TRUNC �����ļ����ڣ�����Ϊֻд���-д�ɹ��򿪣����䳤�Ƚض�Ϊ0
	if (-1 == fd)
	{
		cout << "Serialize::open error" << endl;;
		return false;
	}
	if (-1 == write(fd, &i, sizeof(int)))
	{
		cout << "Serialize::write error" << endl;
		close(fd);
		return false;
	}
	if (-1 == close(fd))
	{
		cout << "Serialize::close error" << endl;
		return false;
	}
	return true;
}

bool ClassA::Deserialize(const char* pFilePath)
{
	int fd = open(pFilePath, O_RDWR);
	if (-1 == fd)
	{
		cout << "Serialize::open error" << endl;;
		return false;
	}
	if (-1 == read(fd, &i, sizeof(int))) //�������������ݴ���ptr��
	{
		cout << "Serialize::read error" << endl;
		close(fd);
		return false;
	}
	if (-1 == close(fd))
	{
		cout << "Serialize::close error" << endl;
		return false;
	}
	return true;
}

void ClassA::PrintObject()const {
	cout << "i = " << i << endl;
}