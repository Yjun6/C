#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class stu 
{
public:
	string name;
	int age;
	int score;

	void print()
	{
		cout<< name << "   " << age << "  " << score<<endl;
	}
};

int main()
{
	stu a;
	stu* p = &a;
	//
	p->name = "Ö£Ù»";
	p->age = 19;
	p->score = 90;
	p->print();
	//
	a.name = "×ÞÓê½à";
	a.age = 19;
	a.score = 99;
	p->print();

	return 0;
}

//int main()
//{
//	int n;
//	string s;
//	cin >> n;
//	getline(cin, s);
//	cout << s.size() << endl;
//	return 0;
//}