#include<iostream>
using namespace std;
int main()
{
	//��ʽ����ת��
	int m = 3 + 45.6;
	double n = 3 + 45.6;

	//������ʾ����ת����ǿ������ת����
	//int k0 = 5 % 3.2;//�﷨��
	int k1 = 5 % (int)3.2;//c���Է��ǿ������ת��
	int k2 = 5 % int(3.2);//�������ǿ������ת��

	//c++ǿ������ת��
	//��4��ǿ������ת�����ֱ����ڲ�ͬ��Ŀ�ġ�
	//1.static_cast
	//2.dynamic_cast
	//3.const_cast
	//4.reinterpret_cast
	//��������ǿ������ת����
	//ͨ����ʽ
	//ǿ������ת����<type>(express);
	//ǿ������ת������1��2��3��4�ĸ�����֮һ
	//type��ת����Ŀ������
	//express����Ҫת����ֵ
	
	//��1��static_cast :��̬ת����������ת����������ʱ���������ת�����
	//����Ҫ��֤ת���İ�ȫ�Ժ���ȷ�ԣ���c�����е�ǿ������ת�����ơ�
	//c���ת��������������ʽת����������static_cast���
	//�����ڣ�
	//a)�������ת�����������ͺ�ʵ��֮���ת��
	//double f = 100.34f;
	//int i1 = (int)f;//c���
	//int i2 = static_cast<int>(f);//c++���

	//b)������ת�ɸ���Ķ���
	class A{};
	class B:public A{};
	B b;
	A a = static_cast<A>(b);//������ת�ɸ���Ķ���
	//B b = static_cast<B>(a);//error

	//c)void *����������ָ��֮���ת��
	//void*������ָ�룬����ָ���κ�����
	int i = 10;
	int *p = &i;
	void *q = static_cast<void*>(p);//int*ת��void*
	int *db = static_cast<int*>(q);//
	//��������
	//a��һ�㲻������ָ������֮���ת������int*תdouble*��float*תdouble*�ȵ�
	double f = 100.0f;
	double *pf = &f;
	//int *i = static_cast<int*>(pf);//error
	//float *fd = static_cast<float*>(pf);

	//(2)dynamic_cast:��ҪӦ��������ʱ����ʶ��ͼ��
	//��Ҫ���������ͺ�������ת��
	//��ʹ������ָ��ָ�������Ͷ���Ȼ����dynamic_cast�Ѹ�ָ����������ָ������ת��

	//(3)const_castȥ��ָ�룬�������õ�const����
	//��ת���ܽ�const����ת����������ʱ��������ת��

	const int ai = 90;
	//int ai2 = const_cast<int>(ai);//ai����ָ��Ҳ��������
	//error

	const int*pai = &ai;
	int *pai2 = const_cast<int*>(pai);
	*pai2 = 120;
	//��дֵ��Ϊ��δ������Ϊ����Ҫ��ô��
	cout << ai << endl;
	cout << *pai << endl;
	////����ʱ����120,��ӡʱ90,120


	//const int ai = 90;
	//int *pai = (int*)&ai;
	//*pai = 120;//δ������Ϊ
	//cout << ai << endl;
	//cout << *pai << endl;

	return 0;
}