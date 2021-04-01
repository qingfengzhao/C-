#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
int main()
{
	int num1 = 0; 
	int num2 = 0;
	int sum = 0; 
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

int Add(int x, int y) 
{
	int z = x+y;
	return z;
} 
int main() 
{
	int num1 = 0;
	int num2 = 0; 
	int sum = 0;
	printf("输入两个操作数:>"); 
	scanf("%d %d", &num1, &num2); 
	sum = Add(num1, num2); 
	printf("sum = %d\n", sum);
	return 0; 
}
