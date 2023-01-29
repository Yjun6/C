#include<iostream>
#include<string>

using namespace std;

struct stu {
	string name;//名字
	int age;//年龄
	string sex;//性别
	int score;//成绩
};

struct tea {
	string name;//名字
	int age;//年龄
	string sex;//性别
	struct stu a1;//辅导的学生
};

int main()
{
	struct tea b1;

	tea* p = &b1;
	stu* p1 = &b1.a1;

	b1.name = "王维";
	b1.age = 35;
	b1.sex = "男";
	b1.a1.name = "蒋某";
	b1.a1.sex = "男";
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