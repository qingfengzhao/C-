#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int b = a++;//后置++，先使用，在++
	printf("a=%d b=%d\n", a, b);//11 11
	int c = ++a;//前置++，先++，在使用
	printf("a=%d c=%d\n", a, c);//12 12 
	return 0;
}
