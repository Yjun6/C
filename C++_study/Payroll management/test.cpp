#define _CRT_SECURE_NO_WARNINGS 1
#include"payroll.h"

void menu();//�˵�

void menu()
{
	cout << "************************************************************" << endl << endl << endl;
	cout << "\t1:����  2:ɾ��  3:����  4:¼��  5:��ʾ  6:�޸�  7:�˳�" << endl << endl;
	cout << "************************************************************" << endl << endl << endl;
	cout << "��ѡ����Ҫ�Ĳ�����";
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
			cout << "����������������룺";
		}
	}
}

void menu2()
{
	system("cls");
	cout << "*********************************" << endl << endl;
	cout << "******** Ա�����ʵ�¼���� *******" << endl << endl;
	cout << "*********************************" << endl << endl;

	cout << "****** ��ѡ�� 1.��¼ 2.ע�� 0.�˳� *****" << endl;
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
			cout << "����������������룺";
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
		cout << "�����ϵͳʧ�ܣ������³���" << endl;
	}
}

int main()
{
	menu1();
}