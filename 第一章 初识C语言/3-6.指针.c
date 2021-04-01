#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;//4个字符
	int* p = &a;//取地址
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//* 解引用操作符
	printf("a=%d\n", a);
	//有一种变量是用来存放地址的--指针变量
 //只针大小在32位平台是4个字节，64位平台是8个字节
	printf("%p\n", &a);
	printf("%d\n", sizeof(p));
	return 0;
}

int main()
{
	//1.计算指针变量的内存大小
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	
	//2.
	double d=3.14;
	double* pd = &d;//32-4 64-8
	printf("%lf-%p", d,*pd);

	int a = 10;//申请了4个字节的空间
	printf("%p\n", &a);
	int* p = &a;//p是一个变量-指针变量
	printf("%d\n", *p);
	*p = 20;//* -解引用操作符/间接访问操作符
	printf("a=%d\n", a);
	return 0;
}


