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

void invoke(int (*p)(int x, int y))
{
	printf("��������������");
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("����ǣ�%d\n\n", p(x, y));
}

int main()
{
	int choice = 0;
	int x = 0, y = 0;
	do
	{
		menu();//����Ļ
		printf("����������ѡ��");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			invoke(add);
			break;
		case 2:
			invoke(sub);
			break;
		case 3:
			invoke(mul);
			break;
		case 4:
			invoke(div);
			break;
		case 0:
			printf("�����˳��У����Ե�...\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (choice);

	return 0;
}