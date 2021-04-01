#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 10

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	////const 常属性
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量。
	////int arr[n] = { 0 };
	////const 修饰的常变量
	//const int num = 4;
	//printf("%d\n", num);
	////num = 8;
	//printf("%d\n", num);

	////#define定义的标识符常量
	//int arr[MAX] = { 0 };
	//printf("%d",MAX);
	////数组中可以放入字面常量和标识符常量

	//枚举常量
	//枚举一一列举
	enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2

	return 0;
}
