#include"game.h"

void menu1();//ѡ�����
void test();//ѡ����
void Game();//��������Ϸ���к���
void menu2();//�ٴ�ѡ������Ϸ����

void Game()
{
	srand((unsigned int)time(NULL));
	system("cls");
	printf("\t\t\t��ӭ������������Ϸ������\n\n\n");

	char win;

	char board[H][L];
	//��ʼ������
	blank_borad(board, H, L);
	//��ӡ�հ����
	print(board, H, L);

	while (1)
	{
		//�������
		play_game(board, H, L);
		//��ӡ���
		print(board, H, L);
		//�ж���Ӯ
		win = is_win(board, H, L);
		if (win == '*')
		{
			printf("���ʤ��");
			break;
		}
		else if (win == '#')
		{
			printf("����ʤ��");
			break;
		}
		else if (win == 'Z')
		{
			printf("ƽ��");
			break;
		}

		//��������
		computer_game(board, H, L);
		//��ӡ���
		print(board, H, L);
		//�ж���Ӯ
		win = is_win(board, H, L);
		if (win == '*')
		{
			printf("���ʤ��");
			break;
		}
		else if (win == '#')
		{
			printf("����ʤ��");
			break;
		}
		else if (win == 'Z')
		{
			printf("ƽ��");
			break;
		}
	}



}

void test()//ѡ����
{
	int choice = 0;
	do
	{
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			Game();//��������Ϸ���к���
			break;
		case 2:
			printf("���˳���Ϸ....\n");
			break;
		default:
			printf("�������������ѡ��");
			break;
		}

		if (choice==1)
		{
			menu2();//�ٴ�ѡ������Ϸ����
		}

	} while (choice != 2);


}

void menu2()//�ٴ�ѡ������Ϸ����
{
	printf("\t���Ƿ�����һ����������Ϸ��\n");
	printf("\t 1.play 2.exit\n");
}

void menu1()//ѡ�����
{
	printf("\t***********************************\n");
	printf("\t********��ӭ������������Ϸ*********\n");
	printf("\t***** ��ѡ�� 1.play 2.exit ******\n");
	printf("\t***********************************\n");
}

int main()
{

	menu1();//ѡ�����
	test();//ѡ����

	return 0;
}