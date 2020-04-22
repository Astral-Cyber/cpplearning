#include "SerializerForClassA.h"

bool SerializerForClassA::Serialize(const char*pFilePath, vector<ClassA>&v)
{
	int fd = open(pFilePath, O_RDWR | O_CREAT | O_TRUNC, 0666);
	//O_RDWR ����д��
	//O_CREAT �����ļ��������򴴽�����ʹ�ô�ѡ��ʱ��Ҫ��3������mode
	//O_TRUNC �����ļ����ڣ�����Ϊֻд���-д�ɹ��򿪣����䳤�Ƚض�Ϊ0
	if (-1 == fd)
	{
		cout << "Serialize::open error" << endl;
		return false;
	}
	for (auto i = 0; i < v.size(); ++i)
	{
		v[i].Serialize(fd);
	}
	close(fd);
	return true;
}

bool SerializerForClassA::Deserialize(const char*pFilePath, vector<ClassA>&v)
{
	int fd = open(pFilePath, O_RDWR);
	//O_RDWR ����д��
	if (-1 == fd)
	{
		cout << "Serialize::open error" << endl;
		return false;
	}
	for (;;) {
		ClassA Object;
		if (true == Object.Deserialize(fd)) {
			v.push_back(Object);
		}
		else
			break;
	}
	close(fd);
	return true;
}