#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nume1();//������
void nume2();//��Ϸѡ����
void play();//��Ϸ����

void nume1()//������
{
	printf("\t**********************************\n");
	printf("\t************ ��������Ϸ **********\n");
	printf("\t****** ��ѡ��1.play  2.exit ****\n");
	printf("\t********  ���ַ�Χ��1-100  *******\n");
	printf("\t**********************************\n");
}
void nume2()//��Ϸѡ����
{
	int choice = 0;
	int a = 1;
	while (a) {
a1:
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				play();//��Ϸ����
				printf("\t����һ����Ϸ��\n");
				printf("\t****** ��ѡ��1.play  2.exit ****\n");
				goto
					a1;
				break;
			case 2:
				printf("�˳���Ϸ...\n");
				a = 0;
				break;
			default:
				printf("�������������ѡ��");
				break;
		}
	}

}
void play()//��Ϸ����
{
	int sjs = 0;//�����
	int player = 0;
	sjs = rand()%100+1;
	printf("������²�����֣�");
	while (1) {
		printf("����������²�����֣�");
		scanf("%d", &player);
		if (player > sjs)
			printf("�²�����ֹ���\n");
		else if (player < sjs)
			printf("�²�����ֹ�С\n");
		else
		{
			printf("��ϲ�㣬�²���ȷ\a\a\a\a\a\a\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	nume1();//������
	nume2();//��Ϸѡ����
	return 0;
}