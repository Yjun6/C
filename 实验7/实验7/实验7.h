#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;//����
	int age;//����
	string sex;//�Ա�
	string address;//��ַ
	string telephone;//�绰
};
class Teacher :virtual public Person
{
public:
	void display(Teacher& teacher);
	//Teacher()
	//{
	//	name = "��ʦ";
	//	age = 35;
	//	sex = "woman";
	//	address = "��÷·18��";
	//	telephone = "18876209773";
	//	title = "�߼���ʦ";
	//}
	string title;//ְ��
};
class Cadre :virtual public Person
{
public:
	void display(Cadre& Cadre);
	//Cadre()
	//{
	//	name ="����";
	//	age = 45;
	//	sex = "man";
	//	address = "��÷·55��";
	//	telephone = "110";
	//	post = "��������";
	//}

	string post;//ְ��
};
class Teacher_Cadre :public Teacher, public Cadre
{
public:
	Teacher_Cadre()
	{
		name = "����";
		age = 45;
		sex = "man";
		address = "��÷·55��";
		telephone = "110";
		post = "��������";
		title = "�߼���ʦ";
		wages = 9000;
	}
	void show(Teacher_Cadre&tc);
	int wages;//����
};