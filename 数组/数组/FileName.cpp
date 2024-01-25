#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include "game.h"


//������һ����ͬ����Ԫ�صļ���,[]�зŵı����ǳ�����
// �����ʹ����ͨ���±�������
//strlen�����ַ������ȣ�ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//sizeof������������飬���͵Ĵ�С-��λ���ֽ�-������



/*
int main()
{
	char arr1[] = "abc"; 
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));     //ռ�ռ����a��b��c��\0
	printf("%d\n", sizeof(arr2));     //ռ�ռ����a��b��c
	printf("%d\n", strlen(arr1));     //��abc�����ַ�������\0��ֹͣ
	printf("%d\n", strlen(arr2));     //���ֵ����֪��ʲôʱ�������\0

	return 0;
}
*/



/*
//һά�������ڴ�����������ŵģ���ַ�ɵ͵�ַ���ߵ�ַ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);           //��ӡ����arr��ÿ��Ԫ�صĵ�ַ
	}
	return 0;
}
*/




/*
//��ά����    []�г�ʼ��ʱ�п���ʡ�ԣ��в���ʡ�ԡ�
int main()
{
	//int arr[3][4];                 //����һ�������У����еĿռ䡣
	//int arr[3][4] = {1,2,3,4,5};   //����ȫ��ʼ��������һ�к��ٷ���һ�С�
	//int arr[3][4] = {{1,2,3}{4,5}} //123���ڵ�һ�У�45���ڵڶ��С�
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/



/*
//��ά�����ڴ���Ҳ��������ŵ�
int main()
{
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}
*/




/*
//ð�����������������������ʹ���Ϊ����
void bubble_sort(int arr[],int sz)          //�˴���sz��ֱ��ʹsz�Ĵ�СΪ10
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)             //��Ҫ���е�ð����������
	{
		int flag = 1;                        //���������Ѿ�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)     //ÿһ��ð������ıȽϣ�j<sz-1-i��һ��ð����������Ҫ�ȽϵĴ���
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);                //arr����ʱ����ȥ������Ԫ�صĵ�ַ
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);       //��ӡð��������arr����
	}
	return 0;
}

*/





//ʵ��������
 
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };        //��������-���������Ϣ����ʼ������Ϊȫ���ո�
	InitBoard(board, ROW, COL);          //��ʼ������
	DisplayBoard(board, ROW, COL);       //��ӡ����
	while (1)
	{
		PlayerMove(board.ROW, COL);       //�������
		DisplayBoard(board, ROW, COL);
		ret = IsWin();                  //�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			break
		}
		ComputerMove(board, ROW, COL);    //��������
		DisplayBoard(board, ROW, COL);
		ret = IsWIn();                                    //�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break
		}
		if (ret == '*')
		{
			printf("���Ӯ");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
	}
}

void menu()
{
	printf("*****************************\n");
	printf("****   1.play   0.exit  *****\n");
	printf("*****************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ��");
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}



int main()
{
	test();
	return 0;
}