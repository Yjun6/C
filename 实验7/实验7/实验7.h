#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;//名字
	int age;//年龄
	string sex;//性别
	string address;//地址
	string telephone;//电话
};
class Teacher :virtual public Person
{
public:
	void display(Teacher& teacher);
	//Teacher()
	//{
	//	name = "老师";
	//	age = 35;
	//	sex = "woman";
	//	address = "新梅路18号";
	//	telephone = "18876209773";
	//	title = "高级教师";
	//}
	string title;//职称
};
class Cadre :virtual public Person
{
public:
	void display(Cadre& Cadre);
	//Cadre()
	//{
	//	name ="老王";
	//	age = 45;
	//	sex = "man";
	//	address = "新梅路55号";
	//	telephone = "110";
	//	post = "教务处主任";
	//}

	string post;//职务
};
class Teacher_Cadre :public Teacher, public Cadre
{
public:
	Teacher_Cadre()
	{
		name = "老王";
		age = 45;
		sex = "man";
		address = "新梅路55号";
		telephone = "110";
		post = "教务处主任";
		title = "高级教师";
		wages = 9000;
	}
	void show(Teacher_Cadre&tc);
	int wages;//工资
};