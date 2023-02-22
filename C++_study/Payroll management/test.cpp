#define _CRT_SECURE_NO_WARNINGS 1
#include"payroll.h"

void menu();//菜单

void menu()
{
	cout << "************************************************************" << endl << endl << endl;
	cout << "\t1:查找  2:删除  3:排序  4:录入  5:显示  6:修改  7:退出" << endl << endl;
	cout << "************************************************************" << endl << endl << endl;
	cout << "请选择需要的操作：";
	int k;

	while (1)
	{
		cin >> k;
		switch (k)
		{
		case 1:
			find();
			menu();
			break;
		case 2:
			dele();
			menu();
			break;
		case 3:
			Sort();
			menu();
			break;
		case 4:
			set();
			menu();
			break;
		case 5:
			show();
			menu();
			break;
		case 6:
			revise();
			menu();
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "输入错误，请重新输入：";
		}
	}
}

void menu2()
{
	system("cls");
	cout << "*********************************" << endl << endl;
	cout << "******** 员工工资登录界面 *******" << endl << endl;
	cout << "*********************************" << endl << endl;

	cout << "****** 请选择 1.登录 2.注册 0.退出 *****" << endl;
}



void menu1()
{
	menu2();

	int choice;
	int result;

	while(1)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
a2:
			result = login();
			goto a1;
		case 2:
			enroll();
			goto a2;
		case 0:
			exit(0);
			break;
		default:
			cout << "输入错误，请重新输入：";
		}
	}

a1:
	if (result == 1)
	{
		system("cls");
		menu();
	}
	else
	{
		cout << "进入该系统失败，请重新尝试" << endl;
	}
}

int main()
{
	menu1();
}