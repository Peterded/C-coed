#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b;
	puts("��������������");
	printf("����x:"); scanf("%d", &a);
	printf("����y:"); scanf("%d", &b);
	printf("x��ֵ��y��%.0f%%\n", ((double)a / b) * 100);
	return 0;
}