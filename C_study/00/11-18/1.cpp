#include<iostream>
#include<string>

using namespace std;



int main()
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	cout << s.size() << endl;
	return 0;
}

//#include <iostream>
//using namespace std;
//void fun(int num)
//{
//    cout << num << endl;
//}
//void fun(char ch)
//{
//    cout << (ch + 1) << endl;
//}
//int main()
//{
//    fun('A');
//    return 0;
//}

//#define E 'A'
//
//int main()
//{
//	int a = b = 5;
//	cout << a << "  " << b << endl;
//	cout << sizeof(E);
//	return 0;
//}

//class student
//{
//public:
//	string name;
//	int age;
//
//protected:
//	int c_score;
//
//private:
//	int password;
//
//};
//
////Ĭ��Ϊ���з���Ȩ��
//struct Class
//{
//	string c_name;
//	int shuzi;
//};
//
//
////Ĭ��Ϊ˽�з���Ȩ��
//class stu
//{
//	string name1;
//};
//
//int main()
//{
//	student a1;
//	a1.name = "����";
//	a1.age = 20;
//
//	Class s1;
//	s1.c_name = "215��";
//
//	stu b1;
//	//b1.name1 = "  ";
//	
//	//protected ����Ȩ�� ���ⲻ�ܷ���
//	//a1.c_score = 90;
//
//	//private ˽��Ȩ�� ���ⲻ�ܷ���
//	//a1.password = 534204;
//	return 0;
//}


//class student {
//
//public:
//	string name;
//	int id;
//	int age;
//
//	void m_id(int id1)
//	{
//		id = id1;
//	}
//
//	void print()
//	{
//		cout << name << "  " << id << "  " << age << endl;
//	}
//};
//
//int main()
//{
//	student a1;
//	a1.name = "����";
//	a1.age = 18;
//	a1.id = 20152018;
//	a1.print();
//
//	student a2;
//	a2.name = "�����";
//	a2.age = 17;
//	a2.id = 210405;
//	a2.print();
//
//	a2.m_id(210400124);
//	a2.print();
//
//	return 0;
//}
