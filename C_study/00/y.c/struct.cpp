#include<iostream>
#include<string>

using namespace std;

struct stu {
	string name;//����
	int age;//����
	string sex;//�Ա�
	int score;//�ɼ�
};

struct tea {
	string name;//����
	int age;//����
	string sex;//�Ա�
	struct stu a1;//������ѧ��
};

int main()
{
	struct tea b1;

	tea* p = &b1;
	stu* p1 = &b1.a1;

	b1.name = "��ά";
	b1.age = 35;
	b1.sex = "��";
	b1.a1.name = "��ĳ";
	b1.a1.sex = "��";
	b1.a1.age = 18;
	b1.a1.score = 100;
	cout << b1.name << "  ";
	cout << b1.age << "  ";

	cout << b1.sex << "  ";
	cout << p->sex << "  ";

	cout << b1.a1.name << "  ";
	cout << b1.a1.age << "  ";

	cout << b1.a1.sex << "  ";
	cout << p1->sex << "  ";

	cout << b1.a1.score;
	return 0;
}