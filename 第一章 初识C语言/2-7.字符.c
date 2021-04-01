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
