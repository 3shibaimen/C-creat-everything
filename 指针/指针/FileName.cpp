#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;     //ppa���Ƕ���ָ��
//	int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//	printf("%d\n", ***pppa);
//	return 0;
//}



//�Լ�ʵ�ֿ⺯��strcpy�Ĺ���
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


// �Ż��汾��
//#include<assert.h>                //���ö��Ե�ͷ�ļ���
//char* my_strcpy(char* dest, const char* src)   //��const���εĶ����ܸı�����ֵ,*src���ܱ��ı䡣
//{
//	char* ret = dest;
//	 assert(dest != NULL);        //����-�жϽ��Ϊ���ʲô����������
//	 assert(src != NULL);         //�жϽ��Ϊ�پͻᱨ���ų��˿�����ָ��Ĵ��������
//	while (*dest++ = *src++)      //'\0'��ASCIIֵΪ0������'\0'Ҳ��Ϊ�٣�����'\0'Ҳ������ѭ����
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
//	//const����ָ����������ʱ�����ε���*p��Ҳ����˵����ͨ��p���ı�*p��num��ֵ��
//	int* const p = &num;
//	//const����ָ��������ұ�ʱ�����ε���ָ�����p��Ҳ����˵p���ܱ��ı䡣
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p[10] = &arr;         //ָ�����飬p�Ⱥ�[]���
//	int(*p)[10] = &arr;        //����ָ�룬��������ַ��ָ�룬p�Ⱥ�*���
//	return 0;
//}
//[]�����ȼ�����*�����ã���ʱ�����Ⱥ�[]���


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


//void print(int(*p)[5], int x, int y)        //����������ָ�����ʽ
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));    //*(p+i)Ϊ�ڼ��У�+jΪ���еĵڼ�������
//			printf("%d ",p[i][j]);             //���ַ�ʽ��ӡ�����ͬ
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
//	typedef void (*pfun_t)(int);  //����ָ��������
//	pun_t signal(int, pfun_t);    //��
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
//	int(*p)(int, int) = Add;         //���ú���ָ���ź�����ַ
// printf("%d\n",(*pa)(2, 3));
// printf("%d\n",(pa)(2, 3));        //��������paҲ����
// printf("%d\n",pa(2, 3));
// printf("%d\n",*pa(2, 3));         //err  ���������ȼ�����*
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
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ---������ָ������
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };       //����ָ������
//	                               //����parr��4��Ԫ�أ�ÿ��Ԫ�ص�������int(*  (int, int))�ĺ���ָ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}



////дһ������ָ�� pf���ܹ�ָ��my_strcpy
////дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };   //pfArr��һ������ָ������----ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//void Calc(int(*pf)(int, int))         //�ص�����--ͨ������ָ����õĺ���
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������");
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
//		printf("��ѡ��");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int (*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int) = &pfArr;      //ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ�������pfArr��4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*  )(int, int)
//	return 0;
//}




//int cmp_int(const void* e1, const void* e2)   //void*���Դ���������͵ĵ�ַ�����ǲ��ܽ����ò���
//{
//	return *(int*)e1 - *(int*)e2;             //��void*����ǿ��ת����int*���ͣ��ٽ��н����ò���
//	�Ƚ��������ε�ֵ��e1����e2�ͷ������������ھͷ���0��С�ھͷ��ظ�����
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);  //����qsort��������
//	��һ���������������������Ԫ�ص�ַ��
//	�ڶ��������������������Ԫ�ظ�����
//	�����������������������ÿ��Ԫ�صĴ�С����λ���ֽڡ�
//	���ĸ�����������ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ���������ʹ�����Լ�ʵ��
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
//	�Ƚ��������־��ǱȽ��ַ���
//	�ַ�������ֱ���ô���С�ں͵��ڱȽϣ�Ӧ����strcmp����
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



////�Լ����һ������ʵ��qsort�Ĺ��ܡ�
//Swap(char*buf1, char*buf2, int width)  //����widthʹiѭ��width�Σ�һ���ֽ�һ���ֽڵĽ���
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
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) //�Ƚ�����Ԫ�صĴ�С
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				//����
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



