#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void menu()//����Ļ
{
	printf("\t************************************\n");
	printf("\t***********  1.add  2.sub   ********\n");
	printf("\t***********  3.mul  4.div   ********\n");
	printf("\t***********  0.exit         ********\n");
	printf("\t************************************\n");

}

//add �ӷ� sub ���� mul �˷� div ����
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

//ȫ�ֺ���ָ������
int (*pt[5])(int, int) = { NULL, add, sub, mul, div };

int main()
{
	int choice = 0;
	int x = 0, y = 0;
	do
	{
		menu();//����Ļ
		printf("����������ѡ��");
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("�����˳������������Ե�...\n");
			break;
		}
		else if (choice <= 4 && choice >= 1)//
		{
			printf("��������������");
			scanf("%d %d", &x, &y);
			int result = pt[choice](x , y);
			printf("����ǣ�%d\n", result);
		}
		else
		{
			printf("����������������룺");
		}
	} while (choice);

	return 0;
}