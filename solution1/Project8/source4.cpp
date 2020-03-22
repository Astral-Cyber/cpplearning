//#include<iostream>
//#include"Time2.h"
//#include"TimeClass.h"
//
//using namespace std;
//void func(TimeClass tptime)
//{
//	return;
//}
//
//TimeClass func1()
//{
//	TimeClass temptime;
//	cout << endl;
//	return temptime;//系统产生了临时对象，并且调用了类的拷贝构造函数
//}
//
//int main()
//{
//	//拷贝构造函数
//	//默认情况下，类对象的拷贝是每个成员变量逐个拷贝
//	//如果一个类的构造函数的第一个参数是所属的类类型引用。如果有其它额外参数，那么这些额外参数都有默认值，则这个函数叫做拷贝构造函数
//	//函数默认参数必须放在函数声明中，除非该函数没有函数声明
//	//拷贝函数的作用:会在一定的时机，被系统调用
//
//	//1)建议拷贝构造函数第一个参数总是带着const
//	//2)explicit拷贝构造函数一般不要声明成explicit
//
//	//成员变量逐个拷贝的功能因为我们自己定义的拷贝构造函数的存在而丢失了作用
//	//或者我们说我们自己的“拷贝构造函数”取代了系统默认的每个成员变量逐个拷贝这种行为
//
//	//a)如果我们没有为类定义一个拷贝构造函数，编译器会帮我们定义一个“合成拷贝构造函数”；
//	//b)如果是编译器定义的“合成拷贝构造函数”，这个合成拷贝构造函数一般也是将参数tmptime的成员逐个拷贝到正在创建的对象中
//	//每个成员类型决定了它如何进行拷贝，比如说成员变量如果是整型的，那么就直接把值拷贝过来
//	//如果成员变量是类类型，那么就会调用这个类的拷贝构造函数来拷贝
//	//c)如果自己定义了拷贝构造函数，那么就取代了系统合成的拷贝构造函数，这个时候你必须在自己的拷贝构造函数中给类成员赋值
//	//以免出现类成员没有被赋值就被拷贝的情况发生
//	//TimeClass myTime;//调用默认构造函数
//	//TimeClass myTime2 = myTime;//调用拷贝构造函数
//	//TimeClass myTime3(myTime);//调用拷贝构造函数
//	//TimeClass myTime4{ myTime };//调用拷贝构造函数
//	//TimeClass myTime5 = { myTime };//调用拷贝构造函数
//	
//	//TimeClass myTime6;
//	//myTime6 = myTime5;
//	
//
//	//还有一些发生拷贝构造函数调用的情形
//	//（1）将一个实参传递给一个非引用类型的形参
//	//func(myTime);
//	//（2）从一个函数中返回一个对象的时候
//	TimeClass mytime = func1();
//	//(3）其它情况调用拷贝构造函数
//	return 0;
//}