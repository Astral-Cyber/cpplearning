#include<iostream>
#include"TimeClass.h"
#include"Time2.h"

using namespace std;
//int TimeClass::mystatic = 15;

int main()
{
	//类相关非成员函数
	//TimeClass mytime1(12, 15, 17);
	//WriteTimeClass(mytime1);

	//类内初始化

	//const初始化,在构造函数初始化列表，不可通过赋值语句或者在定义时直接给初值


	//默认构造函数：没有参数的构造函数
	//没有构造函数，进行“默认初始化”
	//类通过一个特殊的构造函数来执行默认的初始化过程，这个特殊的构造函数叫做“默认的构造函数”，也就是无参数的构造函数
	//如果在没有构造函数的情况下，编译器会为我们隐式的自动定义一个默认构造函数（无参）称为“合成的默认构造函数”
	//“合成的默认构造函数”没干什么事
	//一旦我们自己写了一个构造函数，不管这个构造函数带几个参数，编译器都不会为我们创建“合成的默认构造函数”
	//Time2 mytime2;

	//=default, =delete
	//c++11引入
	//=default；编译器能够为我们自动生成函数体
	//Time2 mytime2;
	
	return 0;
}