#define _CRT_SECURE_NO_WARNINGS 1
#include"payroll.h"

void menu();//�˵�

void menu()
{
	cout << "************************************************************" << endl << endl << endl;
	cout << "\t1:����  2:ɾ��  3:����  4:¼��  5:��ʾ  6:�˳�" << endl << endl;
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
			exit(0);
			break;
		default:
			cout << "����������������룺";
		}
	}
}

int main()
{
	menu();
}