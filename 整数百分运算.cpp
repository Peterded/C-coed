#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b;
	puts("请输入两个整数");
	printf("整数x:"); scanf("%d", &a);
	printf("整数y:"); scanf("%d", &b);
	printf("x的值是y的%.0f%%\n", ((double)a / b) * 100);
	return 0;
}