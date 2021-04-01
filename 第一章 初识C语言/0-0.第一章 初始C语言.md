### 1.初识C语言

```markdown
1.什么是C语言？
	C语言是一门计算机语言
2.计算机语言是什么呢？
	C/C++/JAVA/Pyton
3.语言的发展？
	二进制语言
	硬件-电-正电/负电（1/0）
	科学家
	10101010-ADD-助记符-汇编语言--低级语言
	B语言
	C语言 C++ --高级语言
4.C语言发展历程
	C语言-->早期不是很成熟的-->成熟-->流行
	国际标准
		ANSIC-C89/C90
		C99/C11并不流行 --不少的编译器不支持
5.C语言编辑器
	MSVC
```

### 2.第一个C语言程序

#### 2.1.C语言代码文件

```
源文件 .c
头文件 .h
```

#### 2.2.创建C语言项目

![image-20210317193726202](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210317193726202.png)

![image-20210317193807507](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210317193807507.png)

#### 2.3.添加源文件HelloWorld.c

```c
#include <stdio.h>
int main()	//主函数，程序的入口，有且仅有一个main函数
//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
{
	//控制台输出helloworld
	//函数-print function-printf-打印函数
	//库函数-C语言本身提供给我们使用的函数
	//#inclue <stdio.h> 包含一个叫stdio.h的文件 std-标准 standard input output
	printf("HelloWorld\n");
	return 0;//返回0
}

//还有一种写法,已经过时 
/*void main()
{
}*/

```



#### 2.4.注意事项

##### 2.4.1.控制台一闪而过

![image-20210317194110417](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210317194110417.png)

##### 2.4.2.定义预定义符号

```c
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}
```



```markdown
1.'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
注：scanf函数不安全，考虑使用scanf_s来替换，如果不想看到错误，也可以使用 _CRT_SECURE_NO_WARNINGS。
在使用不安全函数的源文件(.c)文件中的第一行，一定是第一行加上一句话：
#define  _CRT_SECURE_NO_WARNINGS 1
2.一劳永逸的解决方法：
D:\SoftWare\Microsoft Visual Studio\2019\Professional\Common7\IDE\VC\VCProjectItems目录下，newc++file.cpp文件中加入#define _CRT_SECURE_NO_WARNINGS 1,以后创建的新的.c文件都会自动有这句代码
或者3.在预处理器中添加_CRT_SECURE_NO_WARNINGS
或者4.在创建项目的时候关闭安全提示
```

![image-20210324202826511](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210324202826511.png)

![image-20210325072058234](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210325072058234.png)

![image-20210324203126077](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210324203126077.png)

### 3.数据类型

#### 3.1.分类

```markdown
char	//字符数据类型
short	//短整型
int		//整型
long 	//长整型
long long	//更长的整型
float 	//单精度浮点数
double	//双精度浮点数
C语言标准规定sizeof(long)>=sizeof(int)
```

#### 3.2.数据类型.c

```c
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
```

#### 3.3.计算机的单位.c

```markdown
计算机中单位
bit 比特位 
byte 字节1024
kb
mb
gb
tb
pb
eb
zb
计算机是硬件---通电
正电 负电
 1	  0
二进制 0 1
八进制 0 1 2 3 4 5 6 7
十进制 0 1 2 3 4 5 6 7 8 9
一个比特储存一个二进制位
10110011 一个字节=8个比特位的大小
```

```c
#include <stdio.h>

int main()
{
	short age = 20; //想内存申请2个字节=16bit位，用来存放20
	float weight = 95.6f;//向内存申请4个字节
	printf("%d", sizeof(weight));
	return 0;
}
```

### 4.变量和常量

#### 4.1.局部变量和全局变量

```c
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
```

#### 4.2.计算两个数的和

```c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&取地址符号
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
```

#### 4.3.变量的作用域

```c
#include <stdio.h>
int main()
{
	//局部变量的作用域
	int num = 0;
	{
		printf("num=%d\n", num);
	}
	return 0; 
}

//全局变量
int global = 2020;
void test()
{
	printf("test()--%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);
	return 0;
}

int main()
{
	//未声明的标识符
	//声明extern外部符号的
	//局部变量的声明周期:进入作用域生命周期开始，出作用域声明周期结束。
	//全局变量的生命周期：整个程序的生命周期。
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
```

#### 4.4.常量

```markdown
C语言中的常量和变量的定义的形式有所差异。
C语言中的常量分为以下几种：
	字面常量
	const修饰的常变量
	#define定义的标识符常量
	枚举常量
```

```c
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
    //字面常量
    
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

```

### 5.字符串和转义字符

#### 5.1.字符串

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc";//数组
	//"abc" 'a' 'b' 'c' '\0' --'\0'(0)字符串的结束标志
	//'a' 97
	//'A' 65
	//ASCII 编码
	printf("%s\n", arr1);
	char arr2[] = { 'a','b','c','\0'};
	//'a' 'b' 'c'
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length -计算字符串长度的
	printf("%d\n", strlen(arr2));

	//"hello bit.\n"这种由双引号（Double Quote）引起来的一串字符成为字符串字面值（String Literal）,或者简称字符串
	//注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容。
	return 0;
}
```

#### 5.2.转义字符

![image-20210325132647466](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210325132647466.png)

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	//\t-水平制表符

	printf("%d\n", strlen("c:\test\32\test.c"));//13

	printf("%c\n", '\141');
	//\32--32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 -=>10进制 26->作为ASCII码值代表的字符

	printf("%c\n", '\x61');

	return 0;
 }
```

### 6.条件和循环语句

#### 6.1.条件语句

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() 
{ 
	int coding = 0;
	printf("你会去敲代码吗？（选择1 or 0）:>");
	scanf("%d", &coding);
	if(coding == 1)
	{
		printf("坚持，你会有好offer\n");
	} 
	else
	{
		printf("放弃，回家卖红薯\n");
	} 
	return 0; 
}

```

#### 6.2.循环语句

```markdown
C语言中如何实现循环呢？ 
while语句-讲解 
for语句（后期讲）
do ... while语句（后期讲）
```



```c
#define _CRT_SECURE_NO_WARNINGS 1

//while循环的实例
#include <stdio.h>
int main() 
{
	printf("加入比特\n");
	int line = 0; 
	while(line<=20000) 
	{
		line++;
		printf("我要继续努力敲代码\n");
	}
	if(line>20000)
		printf("赢取白富美\n");
	return 0; 
}

```

### 7.函数和数组

#### 7.1.函数

```c
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

```

#### 7.2.数组

##### 7.2.1数组的定义：一组相同类型元素的集合

```c
int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个整形数组，最多放10个元素
```

```c
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
int main() 
{
int i = 0;   
int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
for(i=0; i<10; i++)   
{
	printf("%d ", arr[i]); 
} 
printf("\n");
return 0; 
}
```

### 8.操作符

#### 8.1.算数操作符

```markdown
+ 
-  
*  
/  
%
```

#### 8.2.移位操作符

```markdown
>> 右移 除以2 原值不变，要赋值的变量改变值。
<< 左移 乘2
```

#### 8.3.位操作符

```markdown
& 按位与
| 按位或
^ 按位异或
```

#### 8.4.赋值操作符

```markdown
=   +=  -=  *=  /=  &=   ^=   |=    >>=    <<=  
```

#### 8.5.单目操作符

```markdown
!           逻辑反操作
-           负值
+           正值
&           取地址
sizeof      操作数的类型长度（以字节为单位），计算的是变量/类型所占空间的大小
	sizeof(int) True
	sizeof int 这样写不正确
~           对一个数的二进制按位取反
--          前置、后置--
++          前置、后置++
*           间接访问操作符(解引用操作符) 
(类型)       强制类型转换 
```

#### 8.6.关系操作符

```markdown
>
>=
<
<=
!=      用于测试“不相等”
==      用于测试“相等”
```

#### 8.7.逻辑操作符

```markdown
&&          逻辑与 
||          逻辑或
```

#### 8.8.条件操作符

```markdown
exp1 ? exp2 : exp3
```

#### 8.9.逗号表达式

```markdown
exp1, exp2, exp3, …expN
```

#### 8.10.下标引用、函数调用和结构成员

```markdown
[]  ()  .   ->
```

#### 8.11.常见关键字

```markdown
auto  break   case  char  const   continue  default  do   double else  enum   extern float  for   goto  if   int   long  register    return   short  signed  sizeof   static struct  switch  typedef union  unsigned   void  volatile  while
```

```c
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	printf("%d\n", sizeof(arr));//10*sizeof(int)=40
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);

	int a = 10;
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//报错
	return 0;
}
```

### 9.小练习

#### 9.1.交换两个整形变量的数值

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//交换2个整形变量的值
	//1.通过第三者的方式
	int a = 3;
	int b = 5;
	int c = 0;
	printf("交换前：a=%d b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("交换后：a=%d b=%d\n", a, b);

	//2.通过位运算符
	int num1 = 3;
	int num2 = 5;
	printf("交换前：num1=%d num2=%d\n", num1, num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("交换后：num1=%d num2=%d\n", num1, num2);

	//3.通过加法运算
	int n1 = 3;
	int n2 = 5;
	printf("交换前：n1=%d n2=%d\n", n1, n2);
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("交换后：n1=%d n2=%d\n", n1, n2);

	return 0;
}
```

#### 9.2.找出只出现一次的数

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//题目：给定一个非空整型数组，除了某个元素只出现一次以外，其余每个元素均出现两次，找出那个只出现了一次的元素。
//样例：int a[]={1,2,3,4,5,1,2,3,4},该数组中只有5出现一次，其他数字都是成对出现的，要找出5.
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,7,5,4,7,10 };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数

	//1.暴力求解法 
	//for (int i = 0; i < sz; i++) 
	//{
	//	//统计arr[i]在arr数组中出现了几次
	//	int count = 0;//计数器
	//	int j = 0;
	//	for (j = 0; j < sz; j++) 
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("单身狗:%d\n", arr[i]);
	//		break;
	//	}
	//}

	//2.异或的方法
	/*
	3^3=0
	5^5=0
	a^a=0;
	0^5=5
	0^3=3
	0^a=a;
	000
	011
	101
	3^5^3=5;
	3^3^5=5;
	异或满足交换律
	011=3
	011=3
	000=0
	101=5
	101=5
	000=0
	*/
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单身狗：%d\n", ret);
	return 0;
}
```

![image-20210327190540776](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210327190540776.png)

#### 9.3.关机程序

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> //system
#include <string.h> //strcmp

//程序运行，你的电脑在1分钟后关机。如果输入：我是猪，就取消关机。
int main()
{
	char input[20] = { 0 };//存储数据
	//关机
	//system() -专门用来执行系统命令的
	system("shutdown -s -t 60");//60s后系统关机
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入'取消关机'就会立即取消系统关机。\n");
	printf("请输入：");
	scanf("%s", &input); //%s -字符串
	if (strcmp(input, "取消关机")==0)//判断input中存放的数据strcmp=string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
```

#### 9.4.求两个数的最大值

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
```

### 10.操作符

#### 10.1.sizeof()操作符

```c
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	printf("%d\n", sizeof(arr));//10*sizeof(int)=40
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);

	int a = 10;
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//报错
	return 0;
}
```

#### 10.2.字符

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//字符串的结束标志：'\0'
	//abcdef
	//'\0'转移字符-0
	//0 数字0
	//'0' 48
	//'a' 'b' 'c' 'd' 'e' 'f'
	//EOF end of file 文件结束标志 -1
	char ch[10] = "hello bit";
	//字符串中的末尾'\0'是一个字符，算作数组的一个长度，但不是字符串的一个长度。
	printf("%d", strlen(ch));
	return 0;
}
```

#### 10.3.~操作符

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;//4个字节，32bit位。
	int b = ~a;//b是有符号的整型，最高位表示符号，1是负数
	//~--按（2进制）位取反
	//0000000 0000000 0000000 0000000 --a
	//1111111 1111111 1111111 1111111 --b 补码
	//1111111 1111111 1111111 1111110 反码 
	//1000000 0000000 0000000 0000001 原码 -1
	//原码 反码 补码
	//原码->除符号外，全部取反->反码->+1->补码。
	//负数在内存中存储的时候，存储的是二进制的补码。
	printf("%d\n", b);//使用的，打印的这个数的原码。
	return 0;
}

```

![image-20210401200033447](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210401200033447.png)

#### 10.4.前后置自增自减操作符

```c
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
```

#### 10.5.引用操作符

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 0 };
	//arr[4];//[] 下标引用操作符
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//()--函数调用操作符
	printf("%d",sum);
	return 0;
}

```

#### 10.6.三元操作符

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);
	printf("%d", max);
	return 0;
}
```

#### 10.7.寄存器

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//寄存器
//高速缓存
//内存
//硬盘
int main()
{
	//register int a=10;//建议把a定义成寄存器变量
	int a = 20;//int定义的变量是由符号的。signed int=int unsigned int无符号
	//typeof 类型定义 类型重定义
	//typeof unsigned int u_int;
}
```

#### 10.8.static关键字

```c
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
```

#### 10.9.define定义常量和宏

````c
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
````

#### 10.10.指针

![image-20210401200515558](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210401200515558.png)

![image-20210401200522598](C:\Users\qingfeng\AppData\Roaming\Typora\typora-user-images\image-20210401200522598.png)

```c
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
```

#### 10.11.结构体

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//结构体
//char int double 。。。
//复杂对象
//复杂对象-结构体-相当于对象
struct Book
{
	char name[20];
	short price;
};
int main()
{
	//1.利用结构体类型-创建一个 该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);

	//2.利用pb打印出我的书名和价格
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);

	//3.箭头符号
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	//4.修改名字 
	strcpy(b1.name, "C++");//strcpy -string  copy 字符串拷贝-库函数 string.h
	printf("书名：%s\n", b1.name);
	return 0;
}
```

### 10.注意事项：

#### 10.1.关于字符串和数组

```markdown
1.char cha[10]={10};//代表数组长度是10，但是第一个元素位10，其他元素默认为0
2.char arr[]="abc";//默认添加'\0'转义字符
3.char arr[]={'a','b','c'};//不会添加'\0'转义字符
4.char arr[] = { 'a','b','c','\0'};//'\0'转义字符代表一个字符算作arr数组的一个长度，但是把arr算作字符串的时候计算长度不包括'\0'字符。
```

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//字符串的结束标志：'\0'
	//abcdef
	//'\0'转移字符-0
	//0 数字0
	//'0' 48
	//'a' 'b' 'c' 'd' 'e' 'f'
	//EOF end of file 文件结束标志 -1
	char ch[10] = "hello bit";
	//字符串中的末尾'\0'是一个字符，算作数组的一个长度，但不是字符串的一个长度。
	printf("%d", strlen(ch));
	return 0;
}
```





 

