#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
int Max(a, b)
{
	return a > b ? a : b;
}
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("max=%d\n", max);
	//宏的方式
	max = MAX(a, b);
	printf("%d\n", max);
}
