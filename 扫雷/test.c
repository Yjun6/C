#include"game.h"

void menu1();//������
void Choice();//ѡ����
void Game();//��Ϸ����
void menu2();//ѡ���Ƿ�����һ����Ϸ

void Game()
{
	srand((unsigned int)time(NULL));
	system("cls");
	//�洢��
	char board[Line1][Column1];
	//��ӡ���洢�׸���  ���ʵ�ʲ���������
	char board1[Line1][Column1];

	printf("\t��ӭ����ɨ����Ϸ������\n");

	//��ʼ������
	blank_board( board, Line1, Column1,'0');
	blank_board( board1, Line1, Column1,'*');
	//��ӡ����
	print_board( board1, Line, Column);
	//������
	build_board(board, Line, Column);
	//�ж������Ӯ
	is_win_board(board, board1, Line, Column);



}

void Choice()//ѡ����
{
	int choice = 0;
	printf("��ѡ��");

	do
	{
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("���˳���Ϸ....");
			break;
		default:
			printf("����������������룺");
			break;
		}

		menu2();//ѡ���Ƿ�����һ����Ϸ

	} while (choice!=2);

}

void menu2()//ѡ���Ƿ�����һ����Ϸ
{
	printf("\t���Ƿ�����һ��ɨ����Ϸ��\n");
	printf("\t 1.play 2.exit \n");
	printf("��ѡ��");
}

void menu1()//������
{
	printf("\t\t*******************************\n");
	printf("\t\t************ɨ����Ϸ***********\n");
	printf("\t\t******** 1.play 2.exit ********\n");
	printf("\t\t*******************************\n");
	printf("\t\t*******************************\n");

}

int main()
{
	menu1();//������
	Choice();//ѡ����


	return 0;
}