//#include<iostream>
//#include<vector>
//using namespace std;
//struct student {
//	int num;
//};
//int main()
//{
//	//��������һ�ֱ��������ڵ�Ԫ�ص���������
//	//��⣺����������ָ�������е�ĳ��Ԫ��
//	//string,vector []����,�����õ��������ʣ���ͨ�ã�
//	//ͨ�����������������е�Ԫ��ֵ��string�е�ÿ���ַ����������޸�ĳ����������ָ���Ԫ��ֵ
//	//++�� --
//	//
//	//
//	//vector<int> iv1 = { 100,200,300 };
//	//vector<int>::iterator iter;//���������
//	//���iter�������Ǹ�������
//
//	//������begin()/end()���������������rbegin()/rend()����
//	//begin()/end()�������ص�������
//	//iter = iv1.begin();//�����������Ԫ�أ���begin���ص�������ָ����������еĵ�һ��Ԫ��
//	//�൱��iter ָ����iv[0]
//	//end()����һ������������
//	//iter = iv1.end();//end���صĵ�����ָ��Ĳ�����ĩ��Ԫ�أ�����ĩ��Ԫ�صĺ��
//	//���;end()ָ�����һ�������ڵ�Ԫ��
//
//	//���һ������Ϊ��,��ôbegin()/end()���صĵ�������ͬ
//	//vector<int> iv2;
//	//vector<int>::iterator iterbegin = iv2.begin();
//	//vector<int>::iterator iterend = iv2.end();
//	//if (iterbegin == iterend)
//	//{
//	//	cout << "����iv2Ϊ��" << endl;
//	//}
//
//	//vector<int> iv = { 100 ,200, 300 };
//	//for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
//	//{
//	//	cout << *iter << endl;
//	//}
//	////���������,�Ӻ���ǰ����,��rbegin(),rend()
//	////rbegin():����һ�������������ָ����������ĵ�һ��Ԫ��
//	////rend()������һ�������������ָ������������һ��Ԫ�ص���һ��λ��
//	//for (vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
//	//{
//	//	cout << *riter << endl;//300,200,100
//	//}
//
//	//�����������
//	//*iter�����ص�����iter��ָ���Ԫ�ص�����
//	//����Ҫ��֤�����������Ч������Ԫ�أ�����ָ��end();
//	//vector<int>::iterator iter = iv.end();
//	//cout << *iter << endl;����
//
//
//	//vector<int> iv = { 100 ,200, 300 };
//	//++iter;iter++���õ�����ָ�������е���һ��Ԫ��
//	//�Ѿ�ָ��end������++
//
//	//iter1 == iter2 , iter1 != iter2
//	//�������������ָ��ͬһ��Ԫ�أ������
//
//
//	//���ýṹ�еĳ�Ա
//	//vector<student> sv;
//	//student mystu;
//	//mystu.num = 100;
//	//sv.push_back(mystu);//��mystu������sv������
//
//	//vector<student>::iterator iter;
//	//iter = sv.begin(); //ָ���һ��Ԫ��
//	//cout << (*iter).num << endl;
//	//cout << iter->num << endl;
//
//	//const_iterator������, const:����
//	//const_iterator��������ʾֵ���ܸı䣬��ʾ������ָ���Ԫ��ֵ���ܸı�
//	//�����Ǳ�ʾ��������������ܸı䣬Ҳ���ǵ��������Բ���ָ����һ��Ԫ��
//	//ֻ�ܴ������ж�Ԫ�أ�����ͨ�������������д������Ԫ�أ��о�����������ָ��
//	//vector<int> iv = { 100,200,300 };
//	//vector<int>::const_iterator iter;
//	//for (iter = iv.begin(); iter != iv.end(); ++iter)
//	//{
//	//	//*iter = 4; //error
//	//	cout << *iter << endl;
//	//}
//
//	//cbegin() ��cend()
//	//c++11����,��begin, end ����, cbegin,cend���صĶ��س���������
//
//	//vector<int> iv = { 100,200,300 };
//	//for (auto iter = iv.cbegin(); iter != iv.cend(); ++iter)
//	//{
//	//	//*iter = 4; //error,cbegin���ص��ǳ���������
//	//	cout << *iter << endl;
//	//}
//	//
//	//return 0;
//
//	//������ʧЧ
//	//vector<int> vecvalue{1,2,3,4,5};
//	//for (auto vecitem : vecvalue)
//	//{
//	//	vecvalue.push_back(13);//����������׻���
//	//	cout << vecitem << endl;
//	//}
//
//	//for (auto beg = vecvalue.begin(), end = vecvalue.end(); beg != end; ++beg)
//	//{
//	//	vecvalue.push_back(213);
//	//	cout << *beg << endl;
//	//}
//	
//	//���������������У�ʹ���˵���������ѭ���壬ǧ��Ҫ�ı�vector����������
//	//Ҳ���ǲ�Ҫ���ӻ���ɾ��vector������Ԫ��,���ܻ�ʹָ��������Ԫ�ص�ָ�룬���ã�������ʧЧ
//	
//	/*vector<int> vecvalue{ 1,2,3,4,5 };
//	for (auto beg = vecvalue.begin(), end = vecvalue.end(); beg != end; ++beg)
//	{
//		vecvalue.push_back(213);
//		
//		break;
//	}
//	for (auto beg = vecvalue.begin(), end = vecvalue.end(); beg != end; ++beg)
//	{		
//		cout << *beg << endl;
//	}*/
//
//
//	
//
//	//vector<int> vecvalue{ 1,2,3,4,5 };
//	//auto beg = vecvalue.begin();
//	//auto end = vecvalue.end();
//	//while (beg != end)
//	//{
//	//	cout << *beg << endl;
//
//	//	//��begin���λ�ò�����ֵ��������insert
//	//	vecvalue.insert(beg, 80);
//	//	//��һ������Ϊ����λ�ã��ڶ�������Ϊ�����Ԫ��
//	//	//��������϶��ᵼ�µ�����ʧЧ
//	//	//������������ֻҪ���룬����break
//	//	break;
//
//	//	++beg;
//	//}
//
//	//beg = vecvalue.begin();
//	//end = vecvalue.end();
//	//while (beg != end)
//	//{
//	//	cout << *beg << endl;
//
//
//	//	++beg;
//	//}
//	
//	//vector<int> vecvalue{ 1,2,3,4,5 };
//	//auto beg = vecvalue.begin();
//	//int icount = 0;
//	//
//	//while (beg != vecvalue.end())//ÿ�θ���end��ֹend������ʧЧ
//	//{
//	//	beg = vecvalue.insert(beg, icount+80);
//	//	icount++;
//	//	if (icount > 10)
//	//		break;
//
//	//	++beg;
//	//}
// //   beg = vecvalue.begin();
//	//auto end = vecvalue.end();
//	//while (beg != end)
//	//{
//	//	cout << *beg << endl;
//
//
//	//	++beg;
//	//}
//	
//	//���ѳ���
//	//vector<int> iv = { 100,200,300 };
//	//for (auto iter = iv.begin(); iter != iv.end(); ++iter)
//	//{
//	//	//iv.erase(iter);//���ַ���������
//	//	iter = iv.erase(iter);//erase�������Ƴ�iterλ���ϵ�Ԫ�أ�������һ��Ԫ��λ��
//	//						  //���ַ���Ҳ������
//	//}
//
//	//vector<int>::iterator iter = iv.begin();
//	//while (iter != iv.end())
//	//{
//	//	iter = iv.erase(iter);
//	//}//һ��һ��ɾ��
//
//	//iv.clear();//ֱ�����
//
//	//while (!iv.empty())
//	//{
//	//	auto iter = iv.begin();
//	//	iv.erase(iter);
//	//}//һ�ֱȽϺõ���շ�ʽ
//
//	
//	return 0;
//	
//}