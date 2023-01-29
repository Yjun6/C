#include<iostream>

using namespace std;

class student
{
public:
	string name;
	int id;

	void print()
	{
		cout << name << "  " << id << endl;
	}
};

int main()
{
	student a1;
	a1.name = "刘云";
	a1.id = 215435763;
	a1.print();
	return 0;
}

////类和对象
////设计一个圆类 
//
//const double IE = 3.1415926;//圆周率
////#define IE 3.1415926
//
////类 class 紧跟着类的名称
//class yuan
//{
//	//类的具体内容
//	// 访问权限
//	//公共权限
//public:	
//
//	//属性
//	//半径
//	int r;
//
//	//行为  通常用函数调用
//	//获取圆的周长
//	double calculatezc()
//	{
//		return 2 * IE * r;
//	}
//
//};
//
//int main()
//{
//	//创建一个yuan类
//	//实例化
//	yuan c1;
//	//给属性赋值
//	c1.r = 5;
//	//调用yuan类的行为
//	cout << c1.calculatezc() << endl;
//
//
//	return 0;
//}

////关于函数重载的默认参数
//void aoo(int a=3, int b=5)
//{
//	cout << a << "  " << b << endl;
//}
//
//void aoo(int a = 4)
//{
//	cout << a << endl;
//}
//
////关于函数重载的引用
//void aoo(int &a,int &b,int &c)
//{ 
//	cout << a << "  "<<b<<"  "<<c<<endl;
//}
//
//
////变量 使用的不是该函数 const
//void aoo(const int& a, const int& b, const int& c)
//{
//	cout << a << "  ," << b << "  ," <<c << endl;
//}
//
////err 与引用不能同时存在
////void aoo(int a, int b, int c)
////{
////	cout << a << "  " << b << "  " <<
////		c << endl;
////}
//
//int main()
//{
//	aoo(1, 6);
//
//	//err
//	//aoo(3);
//	
//	int a = 5, b = 6, c = 7;
//	aoo(a,b,c);
//
//	aoo(5, 6, 7);
//
//	return 0;
//}


////函数重载
////1 同一个作用域下
////2 函数名称相同
////3 参数类型或个数不同或顺序不同
// //注意
// //函数的返回值不能作为函数重载的条件
//int add(int a, int b)
//{
//	return a + b;
//
//}
//
//
////返回值的类型不同
//// err
////double add(int a, int b)
////{
////	return a + b;
////
////}
// 
//int add(int a)
//{
//	return a;
//}
//
//int main()
//{
//	string name = "邹雨洁";
//	int age = 19;
//	int sum = add(age);
//	int sum1 = add(10, 19);
//	cout << sum << "  " << sum1;
//	//19  29
//	return 0;
//}

