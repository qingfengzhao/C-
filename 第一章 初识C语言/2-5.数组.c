#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
int main() 
{
int i = 0;   
int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //10*4=40 声明数组的时候，中括号内部只能是字面量。
printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节
printf("%d\n",sizeof(arr)/sizeof(int));//计算元素的个数
for(i=0; i<10; i++)   
{
	printf("%d ", arr[i]); 
} 
printf("\n");
return 0; 
}
