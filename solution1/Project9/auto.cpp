//#include<iostream>
//
//using namespace std;
//
//
//template <typename T>
//class A {
//	//TODO:
//};
//
//
//int main()
//{
//	//auto���Ժ�ĳЩ�������ͻ���
//	int x = 0;
//	auto *p1 = &x; //p1Ϊint*��auto�Ƶ�Ϊint
//	auto p2 = &x;  //p2Ϊin*��auto�Ƶ�Ϊint*
//	auto &r1 = x;  //r1Ϊ int&, auto�Ƶ�Ϊint
//	auto r2 = r1;  //r2Ϊint, auto�Ƶ�Ϊint
//	//r1 ������ int& ���ͣ����� auto ȴ���Ƶ�Ϊ int ���ͣ��������=�ұߵı��ʽ��һ����������ʱ��auto �������������ֱ���Ƶ�������ԭʼ����
//
//	//auto��const���
//	int y = 0;
//	const auto n = y;//n Ϊ const int ��auto ���Ƶ�Ϊ int
//	auto f = n;//f Ϊ const int��auto ���Ƶ�Ϊ int��const ���Ա�������
//	const auto&r1 = x; //r1 Ϊ const int& ���ͣ�auto ���Ƶ�Ϊ int
//	auto &r2 = r1; //r1 Ϊ const int& ���ͣ�auto ���Ƶ�Ϊ const int ����
//
//
//	//auto������
//	//auto �����ں����Ĳ�����ʹ�á�
//	//auto ������������ķǾ�̬��Ա������Ҳ����û�� static �ؼ������εĳ�Ա��������
//	//auto���ܶ�������
//	char url[] = "https://github.com/renzhenhua/cpp_learning";
//	//auto  str[] = url;  //arr Ϊ���飬���Բ���ʹ�� auto
//
//	//auto ����������ģ�����
//	A<int>C1;
//	//A<auto>C2 = C1;
//
//
//	return 0;
//}


//auto��Ӧ��
//���������
//#include<vector>
//using namespace std;
//
//int main()
//{
//	//vector<vector<int>> v;
//	//vector<vector<int>>::iterator i = v.begin();
//
//	//ʹ��auto���Է��㶨��stl�ĵ�����������������
//	vector<vector<int>> v;
//	auto i = v.begin();
//
//
//	return 0;
//}
//


//auto���ڷ��ͱ��
#include<iostream>

using namespace std;

class A {
public:
	static int get(void) {
		return 100;
	}
};

class B {
public:
	static const char* get(void) {
		return "https://github.com/renzhenhua/cpp_learning";
	}
};

//ʹ��auto
template<typename T>
void func(void) {
	auto val = T::get();
	cout << val << endl;
}

//������auto
template <typename T1, typename T2>  //��������һ��ģ����� T2
void func(void) {
	T2 val = T1::get();
	cout << val << endl;
}

//int main(void) {
//	func<A>();
//	func<B>();
//
//	//����ʱҲҪ�ֶ���ģ�������ֵ
//	func<A, int>();
//	func<B, const char*>();
//
//	return 0;
//}