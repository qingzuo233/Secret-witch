// ConsoleApplication21.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"
#include "iostream"


int main(void)
{
	int x;
	printf("������һ���ɼ�:");
	scanf("%d,&x");
	if ((x <= '100') || (x >= '90'))
		printf("A�ȡ�\n");
	else if ((x < '90') || (x >= '80'))
		printf("B�ȡ�\n");
	else if ((x < '80') || (x >= '70'))
		printf("C�ȡ�\n");
	else if ((x < '70') || (x >= '60'))
		printf("D�ȡ�\n");
	else if ((x <'60') || (x >= '0'))
		printf("E�ȡ�\n");
	else {
		printf("������Ч");
	}
	system("pause");
	return 0;
}
