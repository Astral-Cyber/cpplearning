#include<iostream>

#include"TimeClass.h"

using namespace std;

//void pfunc()const
//{
//	return;
//}
// �ǳ�Ա�����ϲ��������η�	
//error

int main()
{
	//�ඨ����ʵ�ֳ�Ա����inline
	//����ֱ������Ķ�����ʵ�ֵĳ�Ա�������ᱻ����inline������������

	//��Ա����ĩβ��const
	//const������,�ڳ�Ա�����������һ��const
	//����Ҫ�ڳ�Ա��������������const,ҲҪ�ڳ�Ա��������������const
	//���ã�����ϵͳ�������Ա���� �����޸ĸö������κγ�Ա������ֵ
	//Ҳ����˵�������Ա���������޸���Time���κ�״̬
	//��߼�һ��const��׺�ĳ�Ա������������Ա������

	const TimeClass abc;//����const�������ֶ���������
	//abc.initTime(15,34,60);//error
	//���initTimeֻ�ܱ���const�������
	TimeClass der;
	der.initTime(123,32,32);
	//abc.noone();//errpe�������Ե��ã���Ϊnoone()û��������const
	abc.noone2();

	//const��Ա������������const�����Ƿ�const�������Ե���const��Ա����
	//����const��Ա���������ܱ�const������ã�ֻ�ܱ���const�������

	//mutable(���ȶ�)
	//mutable������Ϊ��ͻ��const������
	//��mutable����һ����Ա���������ʾ�����Ա������Զ���ڿ��Ա��޸ĵ�״̬
	//������const�Ľ�β�ĳ�Ա�����У�Ҳ���Ա��޸�
	
	//����������������,this
	//���ó�Ա����ʱ��������������������ĵ�ַ(&mytime)���ݸ������Ա���������ص�this�β�
	//��ϵͳ�������κζ����Ա��ֱ�ӷ��ʶ���������ͨ��this����ʽ����
	//TimeClass mytime;
	//mytime.add_hour(3);
	//a. thisָ��ֻ���ڳ�Ա������ʹ�ã�ȫ�ֺ�������̬�����ж�����ʹ��thisָ��
	
	//b. ����ͨ��Ա�����У�this��һ��ָ���const�����constָ��
	//(����ΪTimeClass, ��ôthisΪTimeClass*const this)��ʾthisֻ�ܵ�ǰTimeClass����
	
	//c. ��const��Ա�����У�thisָ����һ��ָ��const�����constָ��
	//������ΪTimeClass, this ��const TimeClass *const this ���͵�ָ�룩
	//



	//TimeClass(15);
	TimeClass mytime;
	mytime.add_hour(3).add_minute(12);
	
	return 0;
}