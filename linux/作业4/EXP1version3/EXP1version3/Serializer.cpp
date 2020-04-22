#include "Serializer.h"
using namespace std;

bool Serializer::Serialize(const char*pFilePath, vector<Serialized>&v)
{
	int fd = open(pFilePath, O_RDWR | O_CREAT | O_TRUNC, 0666);
	//O_RDWR ����д��
	//O_CREAT �����ļ��������򴴽�����ʹ�ô�ѡ��ʱ��Ҫ��3������mode
	//O_TRUNC �����ļ����ڣ�����Ϊֻд���-д�ɹ��򿪣����䳤�Ƚض�Ϊ0
	if (-1 == fd)
	{
		cout << "Serialize::open error" <<endl;
		return false;
	}
	for (auto i = 0; i < v.size(); ++i) {
		if (write(fd,&(v[i].nType), 4) == -1) {
			cout << "write error" << endl;
			close(fd);
			return false;
		}
		if (1 == v[i].nType) {
			ClassA * p = (ClassA*)(v[i].pObj);  //��void*ָ��ǿ��ת������ָ��
			//p->PrintObject();
			if (false == p->Serialize(fd))
				return false;
		}
		else if (2 == v[i].nType) {
			ClassB * p = (ClassB*)(v[i].pObj);  //��void*ָ��ǿ��ת������ָ��
			//p->PrintObject();
			if (false == p->Serialize(fd))
				return false;
		}
	}
	if (-1 == close(fd))
		return false;
	return true;
}

bool Serializer::Deserialize(const char*pFilePath, vector<Serialized>&v)
{
	int fd = open(pFilePath, O_RDWR);
	if (-1 == fd) {
		cout << "Serializer::Deserialize:open error"<<endl;
		return false;
	}
	int type;
	int i = 0;
	while (1) {
		int rd = read(fd, &type, 4); 
		if ((-1 == rd )||( 0 == rd) ) {
			break;
		}
		if (1 == type) {
			ClassA *ptr = new ClassA();
			ptr->Deserialize(fd);
			Serialized s;
			s.nType = 1;
			s.pObj = ptr;
			v.push_back(s);
			ptr = nullptr;
			delete ptr;
		}
		else if (2 == type)
		{
			ClassB *ptr = new ClassB();
			ptr->Deserialize(fd);
			Serialized s;
			s.nType = 2;
			s.pObj = ptr;
			v.push_back(s);
			ptr = nullptr;
			delete ptr;
		}
	}
	if (-1 == close(fd))
		return false;
	return true;
}


