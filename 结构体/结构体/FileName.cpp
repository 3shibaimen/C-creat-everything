#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;           //结构体中也可以定义结构体
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hellow bit\n";
//	struct T t = { "hehe",{100,'w',"hellow world",3.14},arr };    //结构体的初始化
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name );
//	printf("age:%d\n", ps->age );
//	printf("tele:%s\n", ps->tele );
//	printf("sex:%s\n", ps->sex );
//}
//
//int main()
//{
//	Stu s{ "李四",40,"15598886688","男" };
//	Print1(s);
//	Print2(&s);                  //结构体传参的方法更优，只需要开辟4/8个字节，节省了空间和时间
//	return 0;
//}

