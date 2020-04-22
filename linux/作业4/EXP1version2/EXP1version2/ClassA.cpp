#include "ClassA.h"
using namespace std;
ClassA::ClassA() {
	x = 0;
	y = 'r';
}
ClassA::ClassA(int i, char j) {
	x = i;
	y = j;
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
	if (false == Serialize(fd))
	{
		cout << "Serialize(fd) = false" << endl;
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
	if (false == Deserialize(fd))
	{
		cout << "Deserialize(fd) = false" << endl;
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


bool ClassA::Serialize(int fd) const {
	if (-1 == fd) {
		return false;
	}
	if (write(fd, &x, sizeof(int)) == -1) {
		return false;
	}
	if (write(fd, &y, sizeof(char)) == -1) {
		return false;
	}
	return true;
}

bool ClassA::Deserialize(int fd){
	if (-1 == fd) {
		return false;
	}
	int rd;
	rd = read(fd, &x, sizeof(int));
	if (-1 == rd || 0 == rd) {
		return false;
	}
	rd = read(fd, &y, sizeof(char));
	if (-1 == rd || 0 == rd) {
		return false;
	}
	return true;
}

void ClassA::PrintObject() {
	cout << "x = " <<x<< endl;
	cout << "y = " <<y<< endl;
}