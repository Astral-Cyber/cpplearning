#include<iostream>
#include<vector>
#include<string>


using namespace std;
struct student {
	int num;
};
int main()
{
	//Ƕ���γɿɱ䳤�Ķ�ά����
	vector<vector<int> > v(3); //v��3��Ԫ�أ�ÿ��Ԫ�ض���vector<int> ����
	for (int i = 0; i < v.size(); ++i)
		for (int j = 0; j < 4; ++j)
			v[i].push_back(j);
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			cout << v[i][j] << " ";
		cout << endl;
	}


	//vector �����ϵĲ��������� ��Ҫ��̬����/����
	//һ�㴴����vector
	//vector�ܶ��������string
	//bool empty();
	vector<int> hua;
	if (hua.empty())
	{
		cout << "huaΪ��" << endl;
	}

	hua.push_back(1);
	hua.push_back(2);
	//void push_back(const T&val);�� val ��ӵ�����ĩβ
	for (int i = 3; i <= 100; i++)
	{
		hua.push_back(i);
	}

	//size:����Ԫ�ظ���
	cout << hua.size() << endl;

	//clear:�Ƴ�����Ԫ�أ��������
	//void clear();
	/*hua.clear();
	cout << hua.size() << endl;*/

	cout << hua[0] << endl; //��ӡ1

	vector<int> ivec;
	ivec.push_back(111);
	ivec = hua; //ivec�õ�100��Ԫ��,ivecԭ����Ԫ�ر������
	ivec = { 12,13,14,15 };//��{}ȡ��ivecԭ�е�ֵ
	cout << ivec.size() << endl;
	
	// == , !=
	//2��vector��ȣ�Ԫ��������ͬ����Ӧλ��Ԫ��ֵ��ͬ
	vector<int>ivec2;
	ivec2 = ivec;
	if (ivec2 == ivec)
	{
		cout << "ivec2 == ivec" << endl;
	}
	ivec2.push_back(123);
	if (ivec2 != ivec)
	{
		cout << "ivec2 != ivec" << endl;
	}

	ivec.clear();
	ivec2.clear();
	if (ivec == ivec2)
	{
		cout << "ivec == ivec2" << endl;
	}

	//��ΧforӦ��
	vector<int> vecvalue{ 1,2,4,5,6 };
	for (auto vecitem : vecvalue)
	{
		cout << vecitem << endl;;
	}

	cout << endl;

	for (auto &vecitem : vecvalue)
	{
		vecitem *= 2;//����һ��
	}

	for (int vecitem: vecvalue)
	{
		cout << vecitem << endl;;
	}

	//��Χfor��һ��
	for (auto vecitem : vecvalue)
	{
		vecvalue.push_back(123);//�����������
		cout << vecitem << endl;
	}
	//conclusion:��for����У������Ǳ���һ�����������Ʋ����У�ǧ��Ҫ�޸�vector���������Ӻ�ɾ����������

	return 0;
}