#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	////getchar()：从键盘获取一个字符内容
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	
	int ch = 0;
	//ctrl+z
	//EOF-end of file ->-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}
