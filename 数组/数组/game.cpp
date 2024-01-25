#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col, j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);       //��ӡһ������
			if (j < col - 1)
			{
				printf("|");
			}
			printf("\n")
			if (i < row - 1)                  //��ӡ�ָ���
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
					{
						printf("|");
					}
					printf("\n");
				}
			}
		}
	}

	void PlayerMove(char board[ROW[COL], int row, int col)
	{
		int x = 0;
		int y = 0;
		printf("����ߣ�\n");
		printf("������Ҫ�µ����꣺");
		scanf("%d%d", &x, &y);
		while (1)                      
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)       //�ж�x��y����ĺϷ���
			{
				if (board[x - 1][y - 1] = ' ')
				{
					board[x - 1][y - 1] = '*';
					braek;
				}
				else
				{
					printf("�������ѱ�ռ��\n");
				}
			}
			else
			{
				printf("����Ƿ������������룺\n");
			}
		}

	}
}

ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
	x = rand() % row;
	y = rand() % col;              //�������0-2������
	while (1)
	{
		if (borad[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//����1��ʾ��������
//����0��ʾ����û��
int IsFull(char board[ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�жϺ������Ƿ�ȫ��ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] == borad[i][2] && board[1][i] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)            //�ж�������
	{
		if (board[0][i] == board[1][i] == board[2][i] && board[i][1] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		reutrn board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		reutrn board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
