////c++������ѧϰ
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> v;//v�Ǵ��int���ͱ����Ŀɱ䳤���飬��ʼ��û��Ԫ��
//	for (int n = 0; n < 5; ++n)
//	{
//		v.push_back(n);//push_back��Ա������vector����β�����һ��Ԫ��
//	}
//	vector<int>::iterator i;//�������������
//	for (i = v.begin(); i != v.end(); ++i)//�õ�������������
//	{
//		cout << *i << " ";//*i ���ǵ�����iָ���Ԫ�� 
//		*i *= 2;//ÿ��Ԫ�ر�Ϊԭ����2��
//	}
//	cout << endl;
//	
//	//�÷����������������
//	for (vector<int>::reverse_iterator j = v.rbegin(); j != v.rend(); ++j)
//		cout << *j << " ";
//	return 0;
//}
//��������һ�����󣬿���ѭ������ STL �����е�Ԫ�أ����ṩ�Ը���Ԫ�صķ��ʡ� STL ����ȫ���ṩ���������Ա��㷨���Բ��ñ�׼��ʽ������Ԫ�أ�
//�����ؿ������ڴ洢Ԫ�ص��������͡�
//
//����ͨ��ʹ�ó�Ա��ȫ�ֺ������� begin() �� end()���Լ���������� ++ �� -- ����ǰ������ƶ�������ʽʹ�õ������� 
//������ͨ����Χ for ѭ���򣨶���ĳЩ���������ͣ��±������[]������ʽʹ�õ�������
//
//�� STL �У����л�Χ�Ŀ�ͷ�ǵ�һ��Ԫ�ء� ���л�Χ��ĩβʼ�ն���Ϊ���һ��Ԫ�ص���һ��λ�á� 
//ȫ�ֺ����Ŀ�ʼ�ͽ����Ὣ���������ص�ָ��������





// compile with: /EHsc /W4
//push_back���
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//template <typename T> void print_elem(const T& t) {
//	cout << "(" << t << ") ";
//}
//
//template <typename T> void print_collection(const T& t) {
//	cout << "  " << t.size() << " elements: ";
//
//	for (const auto& p : t) {
//		print_elem(p);
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; ++i) {
//		v.push_back(10 + i);
//	}
//
//	cout << "vector data: " << endl;
//	print_collection(v);
//
//	// pop_back() until it's empty, printing the last element as we go
//	while (v.begin() != v.end()) {
//		cout << "v.back(): "; print_elem(v.back()); cout << endl;
//		v.pop_back();
//	}
//}
//




#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct conf {
	char itemname[40];
	char itemcontent[100];
};

char *getInfo(vector<conf*> &conflist, const char*pitem)
{
	for (auto pos = conflist.begin(); pos != conflist.end(); ++pos)
	{
		if (_stricmp((*pos)->itemname,pitem) == 0)
		{
			return(*pos)->itemcontent;
		}
	}
	return nullptr;
}
int main()
{
	//�õ���������string��������
	//string str("I love China!");
	//for (auto iter = str.begin(); iter != str.end(); ++iter)
	//{
	//	*iter = toupper(*iter);
	//}
	//cout << str << endl;


	//vector�������ò������ڴ��ͷ�
	//SeverName = 1�� //��ʾ����������
	//SeverID = 10000 //��ʾ������ID

	conf *pconf1 = new conf;
	strcpy_s(pconf1->itemname,sizeof(pconf1->itemname), "SeverName");
	strcpy_s(pconf1->itemcontent,sizeof(pconf1->itemcontent),"1��");

	conf *pconf2 = new conf;
	strcpy_s(pconf2->itemname, sizeof(pconf2->itemname), "SeverID");
	strcpy_s(pconf2->itemcontent, sizeof(pconf2->itemcontent), "100000");

	vector<conf*>conflist;
	conflist.push_back(pconf1);
	conflist.push_back(pconf2);

	char *p_tmp = getInfo(conflist, "SeverName");
	if (p_tmp != nullptr)
	{
		cout << p_tmp << endl;
	}

	//�ͷ��ڴ�
	std::vector<conf*>::iterator pos;
	for (pos = conflist.begin(); pos != conflist.end(); ++pos)
	{
		delete(*pos);//*pos���Ǹ�ָ��
	}

	conflist.clear();

	return 0;
}
