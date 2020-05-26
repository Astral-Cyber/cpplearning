#ifndef _SERCLASS_H_
#define _SERCLASS_H_

#include"Status.h"

class CLUUID;

class ILSerClass
{
public:
	ILSerClass() {

	};
	virtual ~ILSerClass() {

	};
public:
	virtual Status GetObjSize(unsigned int *pObjSize) = 0; //��ȡ��ǰ�����ڴ��С
	virtual Status Serialize(char *pBuffer) = 0;
	virtual Status Deserialize(const char* pBuffer, ILSerClass**) = 0;
	virtual Status GetType(CLUUID& type) = 0;
	virtual Status Dispatch() = 0; //����,��ӡ��
};


#endif // !_SERCLASS_H_
