#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


/*
int main()
{
	char arr1[] = "bit";
	char arr2[] = "%%%%%%";
	strcpy(arr2, arr1);            //�ַ�������,����ʱ���ź����"\0"һ�𿽱�,��ӡʱ����"\0"��ֹͣ��ӡ��
	printf("%s\n", arr2);
	return 0;
}
*/



/*
int main()
{
	char arr[] = "hello world";
	memset(arr,'*', 5);               //memset = memory set (�ڴ�����)�����ڴ��������
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
	printf("�ϴ�ֵ�ǣ�%d\n", max);
	return 0;
}
*/



/*
//ʵ��a��bֵ�Ļ���
void Swap(int* pa, int* pb)         //��Ϊ����ֵֻ�ܷ���һ�������Բ���ֱ�����Զ���ĺ�����ʵ��a��bֵ�Ļ���
{                                   //Ҫ����������������ʵ��a��bֵ�Ļ���
	int tmp = 0;                    //��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
	tmp = *pa;                      //���βε��޸��ǲ���Ӱ��ʵ�ε�
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
//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�ò�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�������ֱ�ӻ�ȡֵ
//��ַ���ã��Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��������Ҫ�ı�ֵ�����
//�˴�Ϊ��ַ���á�
*/




/*
* //������
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
//�ҵ����������е�ĳ����
int binary_search(int arr[], int k,int sz)    //��Ϊ��ʱarr������Ԫ�صĵ�ַ�����Ա�������һ��ָ�롣
{
	//int sz = sizeof(arr) / sizeof(arr[0]);  //ָ���СΪ4���ֽڣ�32λ����arr[0]Ҳ��4���ֽڣ�sz��Ϊ1��
	                                          //����Ҫ��sz�ƶ����������������ȥ��
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)               //�ȺŲ����٣��ҵ���ʱ���±�����±�������
	{
		int mid = (left + right) / 2;   //�м�Ԫ�ص��±�
		                                //���ܷ���while�������棬��Ȼmidֻ����һ��ȷ����ֵ��
		                                //��ÿ�ζ��ֲ��Ҷ�Ҫ����ȷ��һ���м�ֵmid
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
int main()       //���ֲ������������е�ĳ�������ҵ��˷��أ��Ҳ��������-1
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);      //�����ڴ��ε�ʱ�򴫹�ȥ��ֻ�����������һ��Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("%d\n", ret);
	}
	return 0;
}
*/



/*
//ʵ�ֳ���ÿ����һ�κ�����num�ͼ�һ��
void Add(int* p)
{
	(*p)++;                     //++�����ȼ��Ƚϸߣ��������ž�����++����*
}
int main()
{
	int num = 0;
	Add(&num);                 //num�ں����У�Ҫ�ı�num����Ҫ�ô�ַ���á�
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




