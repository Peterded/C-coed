#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main(void)
{
	int a, b;
	printf("请输入整数。\n");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);
	printf("他们的乘积是%d", a*b);

	return 0;
}