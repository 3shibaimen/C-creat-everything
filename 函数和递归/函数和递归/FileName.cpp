#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ڴ��Ϊջ�����žֲ������������βΣ�����������̬���ٵ��ڴ�malloc��calloc������̬����ȫ�ֱ���static���εı�����
//stack overflowջ���
//�ݹ��������Ҫ������
//1����������������������������ʱ�ݹ���ͣ�����������ջ���
//2��ÿ�εݹ����֮��Խ��Խ�ӽ������������


/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);            //�ݹ飺һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
		                          //��һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С�����������
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
//��˳���ӡÿһλ�ϵ�����





/*
//��������ʱ�������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;           //���鿪�ٵ��������Ŀռ䣬str��ŵ��ǵ�һ���ַ��ĵ�ַ��str+1���Ǻ����ַ��ĵ�ַ��
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
	int len = my_strlen(arr);   //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);

	return 0;
}
*/



/*
//��n�Ľ׳�
int fac(int x)
{
	if (x != 0)
	{
		return x*fac(x - 1);     //x�Ľ׳˾���x����x-1�Ľ׳�
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
//��쳲���������

//int fib(int x)                 //���ֵݹ�ļ��㷽������������ͬ�����ݣ����ʱ��Ϳռ���˷ѡ�
//{                              //���Կ��ǵ�����쳲��������С�
//	if (x >= 3)
//	{
//		return x = fib(x - 1) + fib(x - 2);		
//	}
//	else
//	{
//		return 1;
//	}
//}

int fib(int x)          //�����ķ�������쳲��������С�
{                       //�������ظ�ִ��һϵ�����㲽�裬��ǰ��������������������Ĺ��̡�
	int a = 1;
	int b = 1;
	int c = 1;         //cΪ1����Ϊ��nΪ1��2ʱ��ֱ�ӷ���c��ֵ��������cΪ1.

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





