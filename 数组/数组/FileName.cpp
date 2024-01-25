#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include "game.h"


//数组是一组相同类型元素的集合,[]中放的必须是常量。
// 数组的使用是通过下标来调用
//strlen是求字符串长度，只能针对字符串求长度-库函数-使用得引头文件
//sizeof计算变量，数组，类型的大小-单位是字节-操作符



/*
int main()
{
	char arr1[] = "abc"; 
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));     //占空间的有a，b，c，\0
	printf("%d\n", sizeof(arr2));     //占空间的有a，b，c
	printf("%d\n", strlen(arr1));     //数abc三个字符，遇到\0后停止
	printf("%d\n", strlen(arr2));     //随机值，不知道什么时候会遇到\0

	return 0;
}
*/



/*
//一维数组在内存中是连续存放的，地址由低地址到高地址。
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);           //打印数组arr中每个元素的地址
	}
	return 0;
}
*/




/*
//二维数组    []中初始化时行可以省略，列不能省略。
int main()
{
	//int arr[3][4];                 //开辟一个有三行，四列的空间。
	//int arr[3][4] = {1,2,3,4,5};   //不完全初始化，放满一行后，再放下一行。
	//int arr[3][4] = {{1,2,3}{4,5}} //123放在第一行，45放在第二行。
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
//二维数组内存中也是连续存放的
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
//冒泡排序函数，对数组进行排序，使其变为升序
void bubble_sort(int arr[],int sz)          //此处用sz是直接使sz的大小为10
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)             //需要进行的冒泡排序趟数
	{
		int flag = 1;                        //假设数组已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)     //每一趟冒泡排序的比较，j<sz-1-i是一趟冒泡排序中需要比较的次数
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
	bubble_sort(arr, sz);                //arr传参时传过去的是首元素的地址
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);       //打印冒泡排序后的arr数组
	}
	return 0;
}

*/





//实现三子棋
 
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };        //定义数组-存放棋盘信息，初始化棋盘为全部空格。
	InitBoard(board, ROW, COL);          //初始化棋盘
	DisplayBoard(board, ROW, COL);       //打印棋盘
	while (1)
	{
		PlayerMove(board.ROW, COL);       //玩家下棋
		DisplayBoard(board, ROW, COL);
		ret = IsWin();                  //判断玩家是否赢
		if (ret != 'C')
		{
			break
		}
		ComputerMove(board, ROW, COL);    //电脑下棋
		DisplayBoard(board, ROW, COL);
		ret = IsWIn();                                    //判断电脑是否赢
		if (ret != 'C')
		{
			break
		}
		if (ret == '*')
		{
			printf("玩家赢");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
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
		printf("请选择：");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始。");
			break;
		case 0:
			printf("退出游戏。");
			break;
		default:
			printf("选择错误，请重新选择。");
			break;
		}
	} while (input);
}



int main()
{
	test();
	return 0;
}