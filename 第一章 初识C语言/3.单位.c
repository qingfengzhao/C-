#include <stdio.h>

int main()
{
	short age = 20; //想内存申请2个字节=16bit位，用来存放20
	float weight = 95.6f;//向内存申请4个字节
	printf("%d", sizeof(weight));
	return 0;
}
