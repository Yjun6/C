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
	a1.name = "����";
	a1.id = 215435763;
	a1.print();
	return 0;
}

////��Ͷ���
////���һ��Բ�� 
//
//const double IE = 3.1415926;//Բ����
////#define IE 3.1415926
//
////�� class �������������
//class yuan
//{
//	//��ľ�������
//	// ����Ȩ��
//	//����Ȩ��
//public:	
//
//	//����
//	//�뾶
//	int r;
//
//	//��Ϊ  ͨ���ú�������
//	//��ȡԲ���ܳ�
//	double calculatezc()
//	{
//		return 2 * IE * r;
//	}
//
//};
//
//int main()
//{
//	//����һ��yuan��
//	//ʵ����
//	yuan c1;
//	//�����Ը�ֵ
//	c1.r = 5;
//	//����yuan�����Ϊ
//	cout << c1.calculatezc() << endl;
//
//
//	return 0;
//}

////���ں������ص�Ĭ�ϲ���
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
////���ں������ص�����
//void aoo(int &a,int &b,int &c)
//{ 
//	cout << a << "  "<<b<<"  "<<c<<endl;
//}
//
//
////���� ʹ�õĲ��Ǹú��� const
//void aoo(const int& a, const int& b, const int& c)
//{
//	cout << a << "  ," << b << "  ," <<c << endl;
//}
//
////err �����ò���ͬʱ����
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


////��������
////1 ͬһ����������
////2 ����������ͬ
////3 �������ͻ������ͬ��˳��ͬ
// //ע��
// //�����ķ���ֵ������Ϊ�������ص�����
//int add(int a, int b)
//{
//	return a + b;
//
//}
//
//
////����ֵ�����Ͳ�ͬ
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
//	string name = "�����";
//	int age = 19;
//	int sum = add(age);
//	int sum1 = add(10, 19);
//	cout << sum << "  " << sum1;
//	//19  29
//	return 0;
//}

