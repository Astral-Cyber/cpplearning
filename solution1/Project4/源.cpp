//c++������ѧϰ
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;//v�Ǵ��int���ͱ����Ŀɱ䳤���飬��ʼ��û��Ԫ��
	for (int n = 0; n < 5; ++n)
	{
		v.push_back(n);//push_back��Ա������vector����β�����һ��Ԫ��
	}
	vector<int>::iterator i;//�������������
	for (i = v.begin(); i != v.end(); ++i)
	{

	}
}



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
