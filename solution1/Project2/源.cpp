#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

int main()
{
	//stringѧϰ

	//����ͳ�ʼ��
	//string s1; //Ĭ�ϳ�ʼ��, s1 ="" :""�մ���ʾ�����û���ַ�
	//string s2 = "I love the world";//������ĩβ��\0
	//string s3("I love the world");//��s2Ч��һ��
	//string s4 = s2;//����
	//
	//int num = 6;
	//string s5(num, 'a');//s5��ʼ��Ϊnum���ַ�'a'���ַ���
	//����ϵͳ�ڴ�����ʱ����

	//string���캯������������
	/*
	string str("12345678");
	char ch[] = "abcdefgh";
	string a;//����һ�����ַ���
	string str_1(str);//���캯����ȫ������
	string str_2(str, 2, 5);//���캯�������ַ���str�ĵ�2��Ԫ�ؿ�ʼ������5��Ԫ�أ���ֵ��str_2
	string str_3(ch, 5);//���ַ���ch��ǰ5��Ԫ�ظ�ֵ��str_3
	string str_4(5, 'X');//�� 5 �� 'X' ��ɵ��ַ��� "XXXXX" ��ֵ�� str_4
	string str_5(str.begin(),str.end());//�����ַ��� str ������Ԫ�أ�����ֵ�� str_5
	cout << str << endl;
	cout << a << endl;
	cout << str_1 << endl;
	cout << str_2 << endl;
	cout << str_3 << endl;
	cout << str_4 << endl;
	cout << str_5 << endl;
	return 0;
	*/


	//c++��ȡ�ַ�������
	/*
	int size = 0;
	int length = 0;
	unsigned long maxsize = 0;
	int capacity = 0;
	string str("12345678");
	string str_custom;
	str_custom = str;
	//str_custom.resize(5);
	str_custom.reserve(5);
	size = str_custom.size();
	length = str_custom.length();
	maxsize = str_custom.max_size();
	capacity = str_custom.capacity();
	cout << "size = " << size << endl;
	cout << "length = " << length << endl;
	cout << "maxsize = " << maxsize << endl;
	cout << "capacity = " << capacity << endl;
	return 0;
	*/


	//c++string.resize()
	/*
	std::string str("I like to code in C");
	std::cout << str << '\n';
	
	unsigned sz = str.size();

	str.resize(sz + 2, '+');
	std::cout << str << '\n';

	str.resize(14);
	std::cout << str << '\n';
	return 0;
	*/


	//c++��ȡ�ַ���Ԫ��
	//const std::string cs("c.biancheng.net");
	//std::string s("abcde");
	//char temp = 0;
	//char temp_1 = 0;
	//char temp_2 = 0;
	//char temp_3 = 0;
	//char temp_4 = 0;
	//char temp_5 = 0;
	//
	//temp = s[2];//acquire 'c'
	//cout << temp << endl;
	//
	//temp_1 = s.at(2); //acquire 'c'
	//cout << temp_1 << endl;
	//
	//temp_2 = s[s.length()];
	//cout << temp_2 << endl;
	//
	//temp_3 = cs[cs.length()];
	//cout << temp_3 << endl;
	//
	//temp_4 = s.at(s.length()); //�����쳣
	//cout << temp_4 << endl;
	//
	//temp_5 = cs.at(cs.length()); //�����쳣
	//cout << temp_5 << endl;

	//return 0;
	
	/*std::string s("abcde");
	std::cout << s << std::endl;
	char&r = s[2];
	char*p = &s[3];
	r = 'X';
	*p = 'Y';
	std::cout << s << std::endl;
	s = "12345678";
	r = 'X';
	*p = 'Y';
	std::cout << s << std::endl;
	return 0;*/
	
	
	//��Ҫ�����������ͨ���� setw �ٿ������������л�ͨ������ ��ȳ�Ա������ָ��ÿ����������ȡ�
	/*double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	for (int i = 0; i < 4; i++)
	{
		cout.width(10);
		cout << values[i] << '\n';
	}

	for (int i = 0; i < 4; i++)
	{
		cout.width(10);
		cout.fill('*');
		cout << values[i] << endl;
	}*/


	//string sp;
	//ostringstream myString;
	//myString << "this is a test" << ends;
	//sp = myString.str();  // Obtain string
	//cout << sp < endl;


	// setw.cpp
	// compile with: /EHsc


	/*double values1[] = { 1.23, 35.36, 653.7, 4358.24 };
	const char *names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	for (int i = 0; i < 4; i++)
		cout << setw(6) << names[i]<< setw(10) << values1[i] << endl;
	for (int i = 0; i < 4; i++)
		cout << setiosflags(ios::left)
		<< setw(6) << names[i]
		<< resetiosflags(ios::left)
		<< setw(10) << values1[i] << endl;*/
	
	/*string s1;
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}*/

	//size()/length():�����ֽڻ��ַ�����
	/*string s1;
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	string s2 = "I love china";
	cout << s2.size() << endl;
	cout << s2.length() << endl;
	string s3 = "�Ұ�Ů��";
	cout << s3.size() << endl;
	cout << s3.length() << endl;*/

	//string s4 = "abcd";
	//string s5 = "hijk";
	//string s6 = s4 + s5;
	//cout << s6 << endl;
	//s5 = s4;
	//cout << s5 << endl;//ȡ��
	
	//s.c_str();//����һ���ַ���s�е�����ָ��
	//����һ��ָ�������c�ַ�����ָ�볣������\0��β
	//Ϊ����c���Լ�������
	
	//string s10 = "abC";
	//const char*p = s10.c_str();//abC	
	//char str[100];
	//strcpy_s(str,sizeof(str),p);
	//cout << str << endl;
	//string s11(str);//��c�����ַ��������ʼ��
	//
	
	//string s1 = "abc";
	//string s2 = "defg";
	//string s3 = s1 + " and " + s2 + 'e';
	//cout << s3 << endl;//abc and defge

	//string s5 = "abc" + "def"; //�﷨�ϲ�����
	//string s5 = "abc" + s1 + "def";//�м��һ��string�����﷨����
	//string s5 = "abc" + "def" + s2;//error

	string s1 = "i love the world";
	//for (auto c : s1)//auto�����Զ��ƶ� char
	//{
	//	cout << c << endl;
	//}
	for (auto &c : s1)
	{
		//toupper()��Сд�ַ�ת�ɴ�д�ַ�
		c = toupper(c);//��Ϊc��һ�����ã��൱�ڸı�s1�е�ֵ
	}
	cout << s1 << endl;
	return 0;
}
