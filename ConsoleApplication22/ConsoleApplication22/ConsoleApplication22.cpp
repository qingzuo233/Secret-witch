// ConsoleApplication21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"
#include "iostream"


int main(void)
{
	int x;
	printf("请输入一个成绩:");
	scanf("%d,&x");
	if ((x <= '100') || (x >= '90'))
		printf("A等。\n");
	else if ((x < '90') || (x >= '80'))
		printf("B等。\n");
	else if ((x < '80') || (x >= '70'))
		printf("C等。\n");
	else if ((x < '70') || (x >= '60'))
		printf("D等。\n");
	else if ((x <'60') || (x >= '0'))
		printf("E等。\n");
	else {
		printf("数据无效");
	}
	system("pause");
	return 0;
}
