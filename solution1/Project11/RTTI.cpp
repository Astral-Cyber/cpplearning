#include"Human.h"
#include"Men.h"
#include"Women.h"
#include<iostream>
using namespace std;
int main()
{
	//RTTI "Run-Time Type Identification" ����ʱ����ʶ��
	//ͨ������ʱ����ʶ�𣬳����ܹ�ʹ�û����ָ����������������Щָ�����������ָ�Ķ����ʵ���������
	
	//Human *phuman = new Men;
	//Human &p = *phuman; //*phuman��ʾָ��phuman��ָ��Ķ���
	
	//RTTI�������ܣ����ֹ���ͨ��2�������������
	//1��dynamic_cast��������ܹ��ѻ����ָ��������ð�ȫ��ת��Ϊ�������ָ�������
	//2��typeid�����������ָ�����������ָ�����ʵ������
	//Ҫд��RTTI�������������������������ô�����б�������Ҫ��һ���麯����������ܻ��Ԥ������һ��
	//��Ϊֻ���麯�����ڣ�������������Ż�ʹ��ָ������������󶨵Ķ���Ķ�̬���ݣ���new�����ͣ�
	

	//phuman->eat();
	//phuman->testfunc();

	//dynamic_cast������������������ܹ�ת���ɹ���˵�����ָ��ʵ������Ҫת�������Ǹ����͡����������ܹ�����������ȫ���
	//Human *phuman = new Men;
	//Men *p = (Men*)(phuman);//��c���Է���ǿ������ת��
	//p->testfunc();//�ܹ���������Men��ĳ�Ա����testfunc();

	//Women *p1 = (Women*)(phuman);
	//���׳�����
	
	//Human *phuman = new Men;
	//Men *pmen = dynamic_cast<Men*>(phuman);
	//if (pmen != nullptr)
	//{
	//	std::cout << "phumanʵ������һ��Men����" << std::endl;
	//	//�����������Men��ߵĳ�Ա��������Ա�������ܹ��������Ұ�ȫ�Ĳ���
	//	pmen->testfunc();
	//}else
	//{
	//	//ת��ʧ��
	//	std::cout << "phuman����һ��Men����" << std::endl;
	//}

	//�������ã������dynamic_castת��ʧ�ܣ���ϵͳ���׳�һ��std::bad_cast�쳣try()..catch(){}
	//Human *phuman = new Men;
	//Human &q = *phuman;
	//try
	//{
	//	Men menbm = dynamic_cast<Men&>(q);//ת�����ɹ���������ֱ�ӽ��뵽catch���ȥ�����ת���ɹ������̼���������
	//	//success
	//	std::cout << "phumanʵ������һ��Men����" << std::endl;
	//	menbm.testfunc();
	//}
	//catch (std::bad_cast)
	//{
	//	std::cout << "phumanʵ�ʲ���һ��Men����" << std::endl;
	//}


	//typeid�����
	//typeid(����)��Ҳ����typeid(���ʽ)
	//�õ�����������Ϣ��typeid�ͻ᷵��һ��������������ã��������������һ����׼������type_info
	/*Human *phuman = new Men;
	Human &q = *phuman;
	std::cout << typeid(*phuman).name() << std::endl;
	std::cout << typeid(q).name() << std::endl;
	char a[10] = { 5,1 };
	int b = 120;
	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	std::cout << typeid(19.6).name() << std::endl;
	std::cout << typeid("adfs").name() << std::endl;*/

	//typeid��Ҫ�ǱȽ�2��ָ���Ƿ�ָ��ͬһ������
	//1������ָ�붨���������ͬ��Human��,��������new����ɶ��typeid�����
	//�����Ӳ���������Ҫ��
	/*Human *phuman = new Men;
	Human *phuman2 = new Women;
	if (typeid(phuman) == typeid(phuman2))
	{
		std::cout << "phuman��phuman2��ͬһ������[��ָ�붨��]" << std::endl;
	}*/

	//�Ƚ϶���ʱ��������new���������ĸ����󣬻��߸�ָ��ָ������ĸ����󣬺Ͷ����ָ��ʱ������ûɶ��ϵ

	/*Human *phuman = new Men;
	Men *phuman2 = new Men;
	Human *phuman3 = phuman2;
	if (typeid(*phuman) == typeid(*phuman2))
	{
		std::cout << "phuman ��phuman2ָ��Ķ���������ͬ" << std::endl;
	}
	if (typeid(*phuman3) == typeid(*phuman2)) 
	{
		std::cout << "phuman2 ��phuman3ָ��Ķ���������ͬ" << std::endl;
	}*/

	/*Human *phuman = new Men;
	if (typeid(*phuman) == typeid(Men))
	{
		std::cout << "phumanָ��Men" << endl;
	}
	else if (typeid(*phuman) == typeid(Human))
	{
		cout << "phumanָ��Human" << endl;
	}*/
	//�������Ҫ���麯���������ϱ�����������
	//�мǣ�ֻ�л������麯��ʱ���������Ż��typeid()�еı��ʽ��ֵ���������ĳ�����Ͳ������麯��
	//��typeid�������ص��Ǳ��ʽ�ľ�̬���ͣ�����ʱ�����ͣ���Ȼ�Ƕ�������ͣ��������Ͳ���Ҫ�Ա��ʽ��ֵ��Ҳ��֪�����ʽ�ľ�̬����

	//type_info��
	//��׼������

	//a)  .name:���֣�����һ��c����ַ���
	//Human *phuman = new Men;
	//const type_info &tp = typeid(*phuman);
	////cout << tp.name() << endl; //��ӡ class Men

	////b) ==, !=,
	//Human *phuman2 = new Men;
	//const type_info &tp2 = typeid(*phuman2);
	//if (tp == tp2)
	//{
	//	cout << "tp��tp2������ͬ" << endl;
	//}
	//Human *phuman3 = new Women;
	//const type_info &tp3 = typeid(*phuman3);
	//if (tp == tp3)
	//{
	//	cout << "tp��tp3������ͬ" << endl;
	//}


	//RTTI���麯����
	//c++����ຬ���麯�����������ͻ�Ը������һ���麯����
	//�麯�����кܶ��ÿһ���һ��ָ�룬ÿ��ָ��ָ����������������麯������ڵ�ַ
	//�麯���������һ����������⣬��ָ��Ĳ����麯������ڵ�ַ����ָ��ʵ�������������������type_info����
	Human *phuman = new Men;
	const type_info &ty = typeid(*phuman);
	//phuman��������һ�����ǿ�������ָ�룬���ָ��ָ���������������ڵ���Men����麯����
	return 0;
}