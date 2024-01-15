#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


/*
int main()
{
	char arr1[] = "bit";
	char arr2[] = "%%%%%%";
	strcpy(arr2, arr1);            //字符串拷贝,拷贝时连着后面的"\0"一起拷贝,打印时遇到"\0"就停止打印。
	printf("%s\n", arr2);
	return 0;
}
*/



/*
int main()
{
	char arr[] = "hello world";
	memset(arr,'*', 5);               //memset = memory set (内存设置)属于内存操作函数
	printf("%s\n", arr);
	return 0;
}
*/





/*
int get_max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a,&b);
	int max = get_max(a, b);
	printf("较大值是：%d\n", max);
	return 0;
}
*/



/*
//实现a，b值的互换
void Swap(int* pa, int* pb)         //因为返回值只能返回一个，所以不能直接在自定义的函数中实现a，b值的互换
{                                   //要借助第三个变量来实现a，b值的互换
	int tmp = 0;                    //当实参传给形参的时候，形参其实是实参的一份临时拷贝
	tmp = *pa;                      //对形参的修改是不会影响实参的
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	Swap(&a, &b);                  
	printf("a=%d\nb=%d\n",a,b);
	return 0;
} 
//传值调用：函数的形参和实参分别占用不同内存块，对形参的修改不会影响实参。适用于直接获取值
//传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。适用于要改变值的情况
//此处为传址调用。
*/




/*
* //找素数
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for(j=2;j<=sqrt(n);j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/




/*
//找到有序数列中的某个数
int binary_search(int arr[], int k,int sz)    //因为此时arr接收了元素的地址，所以本质上是一个指针。
{
	//int sz = sizeof(arr) / sizeof(arr[0]);  //指针大小为4个字节（32位），arr[0]也是4个字节，sz既为1。
	                                          //所以要把sz移动到下面的主函数中去。
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)               //等号不能少，找到数时左下标和右下标可能相等
	{
		int mid = (left + right) / 2;   //中间元素的下标
		                                //不能放在while语句的外面，不然mid只是求一个确定的值，
		                                //而每次二分查找都要重新确定一个中间值mid
		if (arr[mid] < k)
		{
			left = mid+1;
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()       //二分查找有序数列中的某个数，找到了返回，找不到就输出-1
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);      //数组在传参的时候传过去的只有数组里面第一个元素的地址
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("%d\n", ret);
	}
	return 0;
}
*/



/*
//实现程序：每调用一次函数，num就加一次
void Add(int* p)
{
	(*p)++;                     //++的优先级比较高，不加括号就是先++，再*
}
int main()
{
	int num = 0;
	Add(&num);                 //num在函数中，要改变num，就要用传址调用。
	{
		printf("num=%d\n", num);
	}
	Add(&num);
	{
		printf("num=%d\n", num);
	}
	Add(&num);
	{
		printf("num=%d\n", num);
	}
	return 0;
}
*/




