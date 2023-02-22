#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;

int login();//登录
void enroll();//注册

void find();//查找
void dele();//删除
void Sort();//排序，按工资顺序
void set();//输入数据
void show();//显示文件内已有的员工信息
void revise();//修改员工信息

//用户账号信息
class user {
public:
	string name;
	string password;
	user() {}
	user(string n, string pwd)
	{
		name = n;
		password = pwd;
	}
	void u_set(string n, string p)
	{
		name = n;
		password = p;
	}
	~user() {}
};

//用于最后统计人员工资
class employee {
public:
	string id;
	string name;
	int age;
	string gender;
	int money;

	void e_set(string i, string n, int a, string g, int m) 
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		money = m;
	}
};

class Manager {
public:
	string id;
	string name;
	int age;
	string gender;
	int monthly_salary;
	Manager() {}
	Manager(string i, string n, int a, string g, int m = 8000)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		monthly_salary = m;
	}
	void m_set(string i, string n, int a, string g, int m = 8000)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		monthly_salary = m;
	}
	~Manager() {}
};

class Technician {
public:
	string id;
	string name;
	int age;
	string gender;
	int hourly_salary;
	Technician() {}
	Technician(string i, string n, int a, string g, int h)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		hourly_salary = 100 * h;
	}
	void m_set(string i, string n, int a, string g, int h)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		hourly_salary = 100 * h;
	}
	~Technician() {}
};

class Salesman {
public:
	string id;
	string name;
	int age;
	string gender;
	int rate;
	Salesman() {}
	Salesman(string i, string n, int a, string g, int r)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04;
	}
	void S_set(string i, string n, int a, string g, int r)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04;
	}
	~Salesman() {}
};

class SalesManager {
public:
	string id;
	string name;
	int age;
	string gender;
	double rate;
	int monthly_salary = 5000;
	SalesManager() {}
	SalesManager(string i, string n, int a, string g, int r)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04 + 5000;
	}
	void Sm_set(string i, string n, int a, string g, int r)
	{
		id = i;
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04 + 5000;
	}
	~SalesManager() {}
};

