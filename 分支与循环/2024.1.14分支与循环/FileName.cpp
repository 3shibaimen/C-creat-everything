#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;       //break����������whileѭ����continue�����������������Ǵ�ѭ����֮���ѭ���������
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


/*
int main()
{
	int ch = 0;
	//getchar����ctrl + z��ʱ����ȡ��EOF
	//EOFָend of file�ļ�������־����������-1���ֵ��
	while ((ch = getchar()) != EOF)    //getchar��ȡ�ַ���һ��һ����ȡ�ģ�ֱ������EOF�������EOF������ctrl+z�������EOF
	{
		putchar(ch);
	}
	//int ch = getchar();   //����ch�ַ�
	//putchar(ch);         //���ch�ַ�
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
	printf("���������룺");
	scanf("%s", password);             //�������һ����ַ����Ϊָ����ڣ����Դ˴�����Ҫȡ��ַ��&
	//ȷ�������ᰴ��enter�������»�������ʣһ��'/n'
	//Ҫ��ȡ�����'\n'������ջ������������getchar�Ż�ͣ������������
	while ((ch = getchar()) != '\n')    //��ѭ����������ݻ�����
	{
		;
	}
	printf("��ȷ��(Y/N)��");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
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



//��ϰ
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
	printf("n�Ľ׳�Ϊ��%d",t);
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
	
	printf("1�Ľ׳˼ӵ�10�Ľ׳�Ϊ��%d",sum);
	return 0;
}
*/


/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof (arr[0]);   //����Ԫ�ظ���
	int i = 0;
	int k = 7;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{ 
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
			printf("������\n");
	}

	return 0;
}
*/


/*
int main()     //���ֲ��ҷ�
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int left = 0;  //���±�
	int right = sz - 1;  //���±�
	
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
*/


/*
#include<windows.h>    //ʹ��Sleep
#include<stdlib.h>     //sʹ��system����
int main()
{
	char arr1[] = "welcom to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;   //�����β���С�/0��,Ҫ���ȥ���ܵõ����±�
		while (left<=right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1000);        //ͣ��1ms
			system("cls");      //ִ��ϵͳ�����һ������cls��ʹ��Ļ���
			left++;
			right--;
		}
		return 0;
}
*/



/*
#include<string.h>    //ʹ�ÿ⺯��strcmp
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������")
		}
		
	}
		if(i == 3)
		{
			printf("3��ȫ���˳�����\n");
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
#include<math.h>      //����sqrt��ͷ�ļ�
int main()            //������(�Գ���)
{
	int i = 0;         
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;                           //һ����������������������һ��������<=��ƽ��i
		for (j = 2; j <= sqrt(i); j++)       //sqrt ����ƽ������ѧ�⺯��
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
//��ӡ�˷��ھ���
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i,j,i*j);    //%2d:������λ��������λ�ÿո��룬��ʱΪ�Ҷ��롣
		}                                      //%-2dΪ�����.
		printf("\n");
	}
	return 0;
}
*/




/*
#include<stdlib.h>                   //randͷ�ļ�
#include<time.h>                     //timeͷ�ļ�
//��������Ϸ
void menu()
{
	printf("***************************\n");
	printf("***  1.paly    0.exit   ***\n");
	printf("***************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;    //���ղµ�����
		//��ʱ����������������������ʼ��
		//��time���ض���time_t��time_t*time������Ϊ������.
	ret = rand()%100+1;                                   //����1-100�������
	                                                      //rand�������������,RAND_MAX=32767
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���\n");
		}
		else if(ret>guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}                              
	
}

int main()
{	
	srand((unsigned int)time(NULL));         //srandΪrand��ʼ�㣬��time���һֱ�仯������Ϊ��ʼ���������������
	                                         //NULLΪ��ָ��
	                                         //srand�ڹ����г���һ�ξ��С�
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();         //��ʼ��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		
	}
	while (input);
	return 0;
}
*/

#include<string.h>                         //strcmpͷ�ļ�
#include<stdlib.h>                         //systemͷ�ļ�
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");           //shutdown -s -t 60    ����60���ػ�
	                                       //system()��ִ��ϵͳ����
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)         //��strcmp�Ƚ������ַ���
	{
		system("shutdown -a");                //ȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}