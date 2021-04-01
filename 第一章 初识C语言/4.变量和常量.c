#include <stdio.h>

int num2 = 20;//全局变量-定义在代码块({})之外的变量
int global = 10;
int main()
{
	//局部变量和全局变量的名字建议不要相同，容易误会，产生bug
	//当局部变量和全局变量的名字相同的时候，局部变量优先。 
	int num1 = 10;//局部变量-定义在代码块({})内部
	int global = 100;
	printf("%d\n", global);
	printf("%d", num1);
	return 0;
}
