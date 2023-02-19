#define _CRT_SECURE_NO_WARNINGS 1
#include"payroll.h"

void menu();//菜单

void menu()
{
	cout << "************************************************************" << endl << endl << endl;
	cout << "\t1:查找  2:删除  3:排序  4:录入  5:显示  6:退出" << endl << endl;
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
			exit(0);
			break;
		default:
			cout << "输入错误，请重新输入：";
		}
	}
}

int main()
{
	menu();
}