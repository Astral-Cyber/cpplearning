#ifndef _SERCLASS_H_
#define _SERCLASS_H_

//����Ϊ�������
//����Ϊ���麯������������ȥʵ����
//���������ʵ����Щ��������ʵ����

class SerClass
{
public:
	SerClass() {

	};
	virtual ~SerClass() {

	};
public:
	virtual bool Serialize(int fd)const = 0 ;
	virtual bool Deserialize(int fd) = 0;     //����boolֵ
	virtual SerClass* DeserializePtr(int fd) = 0;//���ض���ָ�������bool
	virtual int getType() = 0;
};


#endif // !_SERCLASS_H_


