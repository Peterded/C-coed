#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int a;

    printf("请输入一个整数：");
	scanf("%d",&a);

	printf("这个整数加上十二的结果是%d.\n", a+12);
	return 0;
}