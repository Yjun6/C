//������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void menu1();//����Ļ
void choice1();//ѡ���Ƿ�����Ϸ
void game();//��Ϸ����
void bulid_board();//��������
void print_board();//��ӡ����
void play_board();//ѡ������
void computer_board();//��������
char win_board();//�ж���Ӯ

#define R 3//��
#define L 3//��

char board[R][L] = { 0 };

void bulid_board()//��������
{
	int r = R;
	int l = L;
	int i = 0, j = 0;
	//��ʼ������
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			board[i][j] = ' ';
		}
	}

}

void print_board()//��ӡ����
{
	//   |   |
	//-----------
	//   |   |
	//-----------
	//   |   |

	int r = R;
	int l = L;
	int i = 0, j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < l;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < l - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < r - 1)
		{
			for (j = 0;j < l;j++)
			{
				printf("---");
				if (j < l - 1)
				{
					printf("-");
				}
			}
			printf("\n");
		}

	}

}

void play_board()//ѡ������
{
	int n = 0, m = 0;
	//���������±�Ϊ1��ʼ��,����������±궼Ҫ-1
	printf("������ѡ���µ�����λ��(����1��1)��");
	while (1)
	{
		scanf("%d,%d", &n, &m);
		n -= 1;
		m -= 1;
		if (board[n][m] == ' ')
		{
			board[n][m] = '*';
			break;
		}
		else
		{
			printf("��������±��������������룺");
		}
	}

}

void computer_board()//��������
{
	int i = 0, j = 0;
	while (1)
	{
		i = rand() % R;
		j = rand() % L;
		if (board[i][j] == ' ')
		{
			printf("�������壺\n");
			board[i][j] = '#';
			break;
		}
	}
}

char win_board()//�ж���Ӯ
{
	int i = 0, j = 0;
	int jade = -1;

	//��
	for (i = 0;i < R;i++)
	{
		jade = -1;
		for (j = 1;j < L;j++)
		{
			if ((board[i][0] == board[i][j]) && (board[i][0] != ' '))
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}

		if (jade == 1)
		{
			return board[i][0];
		}

	}

	//��
	for (j = 0;j < L;j++)
	{
		jade = -1;
		for (i = 1;i < R;i++)
		{
			if ((board[0][j] == board[i][j]) && (board[0][j] != ' '))
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				break;
			}
		}

		if (jade == 1)
		{
			return board[0][j];
		}

	}

	//���Խ���
	jade = -1;
	for (i = 1, j = 1;i < R && j < L;i++, j++)
	{
		if ((board[0][0] == board[i][j]) && (board[0][0] != ' '))
		{
			jade = 1;
		}
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
	{
		return board[0][0];
	}

	// ���Խ���
	jade = -1;
	for (i = 1, j = L-2;i < R && j >= 0;i++, j--)
	{
		if ((board[0][L-1] == board[i][j]) && (board[0][L-1] != ' '))
		{
			jade = 1;
		}
		else
		{
			jade = 0;
			break;
		}
	}
	if (jade == 1)
	{
		return board[0][L-1];
	}

	//ƽ��
	jade = -1;
	for (i = 0;i < R;i++)
	{
		for (j = 0;j < L;j++)
		{
			if (board[i][j] != ' ')
			{
				jade = 1;
			}
			else
			{
				jade = 0;
				goto a;
			}
		}
	}
	if (jade == 1)
		return '0';
a:
	return 1;
}

//--------------------------------------------------------------

void menu1()//����Ļ
{
	printf("************************************\n");
	printf("*************��������Ϸ*************\n");
	printf("********* ѡ��1.Play 2.exit ******\n");
	printf("************************************\n");
	printf("����������ѡ��");
}

void choice1()//ѡ���Ƿ�����Ϸ
{
	int choice = 0;
a1:
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		game();//��Ϸ����
		printf("�Ƿ�����һ����Ϸ��ѡ��1.Play 2.exit\n��ѡ��");
		goto a1;
		break;
	case 2:
		printf("�����˳���Ϸ...\n");
		break;
	default:
		printf("����������������룺");
		goto a1;
		break;
	}

}

void game()//��Ϸ����
{
	system("cls");
	printf("\t\t��ӭ������������Ϸ������\n\n");

	srand((unsigned)time(NULL));

	bulid_board();//��������
	print_board();//��ӡ����

	char win = 0;
	//1-���Ӯ 2-����Ӯ 0-ƽ��
	do {
		play_board();//ѡ������
		print_board();//��ӡ����
		win = win_board();//�ж���Ӯ

		computer_board();//��������
		print_board();//��ӡ����
		win = win_board();//�ж���Ӯ

	} while ((win != '*') && (win != '#') && (win != '0'));

	if (win == '*')
	{
		printf("\t��ϲ�㣬ȡ��ʤ��������\n");
	}
	else if (win == '#')
	{
		printf("\t��ϲ�㣬����˹����ԣ�����\n");
	}
	else
	{
		printf("\t����ƽ�֣�����\n");
	}

}

//---------------------------------------------------

int main()//������
{
	menu1();//����Ļ
	choice1();//ѡ���Ƿ�����Ϸ
	return 0;
}
