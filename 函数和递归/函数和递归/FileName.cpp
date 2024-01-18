#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//内存分为栈区（放局部变量，函数形参），堆区（动态开辟的内存malloc，calloc），静态区（全局变量static修饰的变量）
//stack overflow栈溢出
//递归的两个必要条件：
//1、存在限制条件，满足限制条件时递归能停下来，否则会栈溢出
//2、每次递归调用之后越来越接近这个限制条件


/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);            //递归：一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法。
		                          //把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
*/
//按顺序打印每一位上的数字





/*
//不创建临时变量求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;           //数组开辟的是连续的空间，str存放的是第一个字符的地址，str+1就是后面字符的地址。
//	}
//	return count;
//}
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}

int main()                
{
	char arr[] = "bit";
	int len = my_strlen(arr);   //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len=%d\n", len);

	return 0;
}
*/



/*
//求n的阶乘
int fac(int x)
{
	if (x != 0)
	{
		return x*fac(x - 1);     //x的阶乘就是x乘上x-1的阶乘
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d\n", ret);
	return 0;
}
*/



/*
//求斐波那契数列

//int fib(int x)                 //这种递归的计算方法会计算大量相同的数据，造成时间和空间的浪费。
//{                              //所以考虑迭代算斐波那契数列。
//	if (x >= 3)
//	{
//		return x = fib(x - 1) + fib(x - 2);		
//	}
//	else
//	{
//		return 1;
//	}
//}

int fib(int x)          //迭代的方法计算斐波那契数列。
{                       //迭代：重复执行一系列运算步骤，从前面的量依次求出后面的量的过程。
	int a = 1;
	int b = 1;
	int c = 1;         //c为1是因为当n为1或2时，直接返回c的值，所以让c为1.

	while(x > 2)
	{
		c = a+b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}
*/





