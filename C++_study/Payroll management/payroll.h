#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;

void find();//查找
void dele();//删除
void Sort();//排序，按工资顺序
void set();//输入数据
void show();

//用于最后统计人员工资
class employee {
public:
	string name;
	int age;
	string gender;
	int money;
	void e_set(string n, int a, string g, int m) {
		name = n;age = a;gender = g;money = m;
	}
};

class Manager {
public:
	string name;
	int age;
	string gender;
	int monthly_salary;
	Manager() {}
	Manager(string n, int a, string g, int m = 8000)
	{
		name = n;
		age = a;
		gender = g;
		monthly_salary = m;
	}
	void m_set(string n, int a, string g, int m = 8000)
	{
		name = n;
		age = a;
		gender = g;
		monthly_salary = m;
	}
	~Manager() {}
};

class Technician {
public:
	string name;
	int age;
	string gender;
	int hourly_salary;
	Technician() {}
	Technician(string n, int a, string g, int h)
	{
		name = n;
		age = a;
		gender = g;
		hourly_salary = 100 * h;
	}
	void m_set(string n, int a, string g, int h)
	{
		name = n;
		age = a;
		gender = g;
		hourly_salary = 100 * h;
	}
	~Technician() {}
};

class Salesman {
public:
	string name;
	int age;
	string gender;
	int rate;
	Salesman() {}
	Salesman(string n, int a, string g, int r)
	{
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04;
	}
	void S_set(string n, int a, string g, int r)
	{
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04;
	}
	~Salesman() {}
};

class SalesManager {
public:
	string name;
	int age;
	string gender;
	double rate;
	int monthly_salary = 5000;
	SalesManager() {}
	SalesManager(string n, int a, string g, int r)
	{
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04 + 5000;
	}
	void Sm_set(string n, int a, string g, int r)
	{
		name = n;
		age = a;
		gender = g;
		rate = r * 0.04 + 5000;
	}
	~SalesManager() {}
};

