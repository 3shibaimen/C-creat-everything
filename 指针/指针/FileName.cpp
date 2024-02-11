#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;     //ppa就是二级指针
//	int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//	printf("%d\n", ***pppa);
//	return 0;
//}



//自己实现库函数strcpy的功能
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


// 优化版本：
//#include<assert.h>                //引用断言的头文件。
//char* my_strcpy(char* dest, const char* src)   //被const修饰的对象不能改变它的值,*src不能被改变。
//{
//	char* ret = dest;
//	 assert(dest != NULL);        //断言-判断结果为真就什么都不发生。
//	 assert(src != NULL);         //判断结果为假就会报错，排除了拷贝空指针的错误情况。
//	while (*dest++ = *src++)      //'\0'的ASCII值为0，所以'\0'也是为假，遇到'\0'也会跳出循环。
// {
//		;
// }
// return ret;
//}
//
//int main()
//{
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	;
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//


//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	//const放在指针变量的左边时，修饰的是*p，也就是说不能通过p来改变*p即num的值。
//	int* const p = &num;
//	//const放在指针变量的右边时，修饰的是指针变量p，也就是说p不能被改变。
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p[10] = &arr;         //指针数组，p先和[]结合
//	int(*p)[10] = &arr;        //数组指针，存放数组地址的指针，p先和*结合
//	return 0;
//}
//[]的优先级高于*，不用（）时会优先和[]结合


//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);       //*p = arr
//	}
//	return 0;
//}


//void print(int(*p)[5], int x, int y)        //参数是数组指针的形式
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));    //*(p+i)为第几行，+j为此行的第几个数据
//			printf("%d ",p[i][j]);             //两种方式打印结果相同
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}


//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//
//	typedef void (*pfun_t)(int);  //函数指针重命名
//	pun_t signal(int, pfun_t);    //简化
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add;         //利用函数指针存放函数地址
// printf("%d\n",(*pa)(2, 3));
// printf("%d\n",(pa)(2, 3));        //不解引用pa也可以
// printf("%d\n",pa(2, 3));
// printf("%d\n",*pa(2, 3));         //err  （）的优先级高于*
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//需要一个数组，这个数组可以存放4个函数的地址---即函数指针数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };       //函数指针数组
//	                               //数组parr有4个元素，每个元素的类型是int(*  (int, int))的函数指针
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}



////写一个函数指针 pf，能够指向my_strcpy
////写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*) = { 0 };
//	return 0;
//}


//void menu()
//{
//	printf("************************\n");
//	printf("**  1.add      2.sub  **\n");
//	printf("**  3.mul      4.div  **\n");
//	printf("**  0.quit            **\n");
//	printf("************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}





//void menu()
//{
//	printf("************************\n");
//	printf("**  1.add      2.sub  **\n");
//	printf("**  3.mul      4.div  **\n");
//	printf("**  5.Xor      0.quit **\n");
//	printf("************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };   //pfArr是一个函数指针数组----转移表
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}




//void menu()
//{
//	printf("************************\n");
//	printf("**  1.add      2.sub  **\n");
//	printf("**  3.mul      4.div  **\n");
//	printf("**  0.quit            **\n");
//	printf("************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int(*pf)(int, int))         //回调函数--通过函数指针调用的函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub );
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int (*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) = &pfArr;      //指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组pfArr有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*  )(int, int)
//	return 0;
//}




//int cmp_int(const void* e1, const void* e2)   //void*可以存放任意类型的地址，但是不能解引用操作
//{
//	return *(int*)e1 - *(int*)e2;             //将void*类型强制转化成int*类型，再进行解引用操作
//	比较两个整形的值，e1大于e2就返回正数，等于就返回0，小于就返回负数。
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);  //利用qsort函数排序
//	第一个参数：待排序数组的首元素地址。
//	第二个参数：待排序数组的元素个数。
//	第三个参数：待排序数组的每个元素的大小，单位是字节。
//	第四个参数：函数指针，比较两个元素的所用函数的地址，这个函数使用者自己实现
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((((struct Stu*)e1)->age) - (((struct Stu*)e2)->age));
//}
//int cmp_stu_by_name(onst void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	比较两个名字就是比较字符串
//	字符串不能直接用大于小于和等于比较，应该用strcmp函数
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	return 0;
//}



////自己设计一个函数实现qsort的功能。
//Swap(char*buf1, char*buf2, int width)  //传递width使i循环width次，一个字节一个字节的交换
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) //比较两个元素的大小
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				//交换
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr), cmp_stu_by_name);
//}
//
//int main()
//{
//	test();
//	return 0;
//}



