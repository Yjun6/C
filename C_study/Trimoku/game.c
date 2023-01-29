#include"game.h"

char is_win(char board[H][L], int h, int l)//�ж���Ӯ
{
/*	 |   |
  ---|---|---
	 |   |
  ---|---|---
	 |   |		*/

	int jade = 0;

	int i = 0;
	int j = 0;

	//�� -> win
	for (j = 0;j < h;j++)
	{
		jade = 0;
		for (i = 1;i < l;i++)
		{
			if (board[j][0] == board[j][i]
				&& board[j][0] != ' ')
			{
				jade++;
			}
		}

		if (jade == l - 1)
		{
			return board[j][0];
		}
	}


	//�� -> win
	for (i = 0;i < l;i++)
	{
		jade = 0;
		for (j = 1;j < h;j++)
		{

			if (board[0][i] == board[j][i]
				&& board[0][i] != ' ')
			{
				jade++;
			}
		}

		if (jade == h - 1)
		{
			return board[0][i];
		}
	}


	//��Խ���
	jade = 0;
	for (i=1,j=1;(i<h)&&(j<l);i++,j++)
	{
		if ((board[0][0] == board[i][j])
			&& (board[0][0] != ' '))
		{
			jade++;
		}
	}
	if (jade == h-1 || jade==l-1)
	{
		return board[0][0];
	}

	//�ҶԽ���
	jade = 0;
	for (i=1,j=l-2;(i < h) && (j>=0);i++,j--)
	{
		if ((board[0][l-1] == board[i][j])
			&& (board[0][l-1] != ' '))
		{
			jade++;
		}
	}
	if (jade == h-1 || jade == l-1)
	{
		return board[0][l-1];
	}


	//ƽ��
	jade = 0;
	for (j = 0;j < h;j++)
	{
		for (i = 0;i < l;i++)
		{
			if (board[j][i] != ' ')
			{
				jade++;
			}
		}
	}
	if (jade==l*h)
	{
		return 'Z';
	}


}

void computer_game(char board[H][L], int h, int l)//��������
{
	int i = 0;
	int j = 0;

	printf("�������壺\n");
	while (1)
	{
		i = rand() % h;
		j = rand() % l;

		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}

}

void play_game(char board[H][L], int h, int l)//�������
{
	int i = 0;
	int j = 0;
	printf("������壬������ѡ���µ�������꣺");
	while (1)
	{
		scanf("%d %d", &i, &j);
		//��Ҳ�֪���±��0��ʼ
		i -= 1;
		j -= 1;
		if (board[i][j] == ' ')
		{
			board[i][j] = '*';
			break;
		}
		else
		{
			printf("����ĸ�����Ƿ�������������:");
		}
	}


}

void print(char board[H][L], int h, int l)//��ӡ���
{
	/*   |   |
	  ---|---|---
		 |   |   
	  ---|---|---
	     |   |		*/
	
	int i = 0;
	int j = 0;
	for (j = 0;j < h;j++)
	{
		for (i = 0;i < l-1;i++)
		{
			printf(" %c |", board[j][i]);

			if (i==l-2)
			{
				printf(" %c \n", board[j][i + 1]);
			}
		}

		if (j < h-1)
		{
			for (i = 0;i < l - 1;i++)
			{
				printf("---|");

				if (i == l - 2)
				{
					printf("---\n");
				}
			}
		}
	}

}

void blank_borad(char board[H][L], int h, int l)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0;i < h;i++)
	{
		for (j = 0;j < l;j++)
		{
			board[i][j] = ' ';
		}
	}
}