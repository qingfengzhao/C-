#include <stdio.h>

//%d 打印整型
//%c 打印字符
//%f 打印浮点数子-小数
//%p 以地址的形式打印
//%x 打印16进制数字
//%o ...
int main()
{
	printf("各种数据类型的长度：\n");	 
	printf("%d\n", sizeof(char));	  //1
	printf("%d\n", sizeof(short));	  //2
	printf("%d\n", sizeof(int));	  //4
	printf("%d\n", sizeof(long));	  //4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));	  //4
	printf("%d\n", sizeof(double));	  //8
				
	//char	字符类型
	char ch = 'A';//内存
	printf("%c\n",ch);//%c 打印字符格式的数据

	//short int 短整型
	short int shor = 1;
	printf("短整形：%d\n", shor);

	//int 整型
	int age = 20;
	printf("%d\n", age);//%d 打印整数十进制数据

	//long 长整型
	long num = 100;
	printf("%d\n", num);

	//long long 更长的整型
	long long morenum= 100;
	printf("%d\n", morenum);

	//float 单精度浮点型
	float f = 5.0;
	printf("%f\n", f);

	//double 多精度浮点型
	double d = 5.0;
	printf("%lf\n", d);	//%lf 打印双精度类型的数据

	return 0;
}
