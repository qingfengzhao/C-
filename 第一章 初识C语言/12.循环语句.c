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
