#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*1.static修饰局部变量
* 局部变量的生命周期边长
* 2.static修饰全局变量
* 改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
* 除了源文件就没法在使用了
* 3.static修饰函数
* 也是改变了函数的作用域-不准确
* static修饰函数改变了函数的链接属性
* 外部链接属性——>内部链接属性
* 
*/
void test()
{
	static int a = 1;//a是一个静态的局部变量
	a++;
	printf("a=%d\n", a);
}
extern int Add(int,int);
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	//1.全局变量
	extern int g_val;
	printf("%d\n", g_val);

	//2.全局函数
	int a = 10;
	int b = 20;
	int sum=Add(a, b);
	printf("sum=%d\n", sum);

	return 0;
}
