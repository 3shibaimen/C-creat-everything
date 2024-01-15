#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;       //break是跳出整个while循环，continue是跳出满足条件的那次循环，之后的循环会继续。
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


/*
int main()
{
	int ch = 0;
	//getchar输入ctrl + z的时候会获取到EOF
	//EOF指end of file文件结束标志，本质上是-1这个值。
	while ((ch = getchar()) != EOF)    //getchar获取字符是一个一个获取的，直接输入EOF输出还是EOF，输入ctrl+z输出才是EOF
	{
		putchar(ch);
	}
	//int ch = getchar();   //输入ch字符
	//putchar(ch);         //输出ch字符
	//printf("%c\n", ch);
	return 0;
}
*/


/*
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);             //数组就是一个地址，作为指针存在，所以此处不需要取地址符&
	//确认密码后会按下enter键，导致缓冲区还剩一个'/n'
	//要读取走这个'\n'才能清空缓冲区，下面的getchar才会停下来请求输入
	while ((ch = getchar()) != '\n')    //空循环，清空数据缓冲区
	{
		;
	}
	printf("请确认(Y/N)：");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}

	return 0;
}
*/

/*
int main()
{
	int i = 0, j = 0;
	for (i = 1,j= 1; i <= 10; i++,j++)
		printf("%d", i);
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	do
	{
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}
*/



//练习
/*
int main()
{
	int n = 0; 
	int m = 1;
	int t = 1;
	scanf("%d", &n);
	for(m=1;m<=n;m++)
	{
		t = m * t;
	}
	printf("n的阶乘为：%d",t);
}
*/


/*
int main()
{
	int n = 0;
	int m = 1;
	int t = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		t = 1;
		for(m=1;m<=n;m++)
			{
				t = m * t;
			}
		sum = sum + t;
	}
	
	printf("1的阶乘加到10的阶乘为：%d",sum);
	return 0;
}
*/


/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof (arr[0]);   //计算元素个数
	int i = 0;
	int k = 7;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{ 
			printf("找到了，下标是：%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
			printf("不存在\n");
	}

	return 0;
}
*/


/*
int main()     //二分查找法
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int left = 0;  //左下标
	int right = sz - 1;  //右下标
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
*/


/*
#include<windows.h>    //使用Sleep
#include<stdlib.h>     //s使用system函数
int main()
{
	char arr1[] = "welcom to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;   //数组结尾还有‘/0’,要多减去才能得到右下标
		while (left<=right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1000);        //停留1ms
			system("cls");      //执行系统命令的一个函数cls，使屏幕清空
			left++;
			right--;
		}
		return 0;
}
*/



/*
#include<string.h>    //使用库函数strcmp
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误")
		}
		
	}
		if(i == 3)
		{
			printf("3次全错，退出程序\n");
		}
		return 0;
}
*/



/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a,&b,&c);
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				printf("%d %d %d\n", a,b,c);
			}
			else
			{
				printf("%d %d %d\n", a,c,b);
			}
		}
		if (a < c)
		{
			printf("%d %d %d\n", c, a, b);
		}
	}
	else if (a < b)
	{
		if (a > c)
		{
			printf("%d %d %d\n", c, a, b);	
		}
		if (a < c)
		{
			if (b > c)
			{
				printf("%d %d %d\n", b, c, a);
			}
			else
			{
				printf("%d %d %d\n", c, b, a);
			}
		}
	}
	return 0;
}

*/


/*
#include<math.h>      //引用sqrt的头文件
int main()            //找素数(试除法)
{
	int i = 0;         
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;                           //一个数的两个因子中至少有一个数字是<=开平方i
		for (j = 2; j <= sqrt(i); j++)       //sqrt ：开平方的数学库函数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf(" %d\n", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/




/*
//打印乘法口诀表
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i,j,i*j);    //%2d:输入两位，不够两位用空格补齐，此时为右对齐。
		}                                      //%-2d为左对齐.
		printf("\n");
	}
	return 0;
}
*/




/*
#include<stdlib.h>                   //rand头文件
#include<time.h>                     //time头文件
//猜数字游戏
void menu()
{
	printf("***************************\n");
	printf("***  1.paly    0.exit   ***\n");
	printf("***************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;    //接收猜的数字
		//拿时间戳来设置随机数的生成起始点
		//用time来重定义time_t（time_t*time）类型为长整型.
	ret = rand()%100+1;                                   //生成1-100的随机数
	                                                      //rand用于生成随机数,RAND_MAX=32767
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了\n");
		}
		else if(ret>guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}                              
	
}

int main()
{	
	srand((unsigned int)time(NULL));         //srand为rand起始点，用time这个一直变化的量作为起始点来生成随机数，
	                                         //NULL为空指针
	                                         //srand在工程中出现一次就行。
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();         //开始游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		
	}
	while (input);
	return 0;
}
*/

#include<string.h>                         //strcmp头文件
#include<stdlib.h>                         //system头文件
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");           //shutdown -s -t 60    设置60秒后关机
	                                       //system()：执行系统命令
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)         //用strcmp比较两个字符串
	{
		system("shutdown -a");                //取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}