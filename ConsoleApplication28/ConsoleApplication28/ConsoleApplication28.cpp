#include "stdafx.h"
#include<math.h>
#include<iostream>
int main(void)
{
	int myn, ynu, n, i, flag=0;
	printf("������mynumber������²��������n,�ÿո����.\n");
	scanf("%d%d", &myn, &n);
	printf("-----------LOADING------------\n");
	for (i = 0; i <= n; i++) { 
		printf("������yournumber\n");
		scanf("%d", &ynu);
		if (ynu < 0)
			break;
		if (ynu == myn) {
			if (i == 1) {
				flag = 1;
				printf("Bingo!\n");
				break;
			}
			if (i == 2 || i == 3)
			{
				flag = 1;
				printf("Lucky You\n");
				break;
			}
			if (i > 3)
			{
				flag = 1;
				printf("Good Guess!\n");
				break;
			}
		}
		if (ynu > myn)
			printf("Too Big\n");
		if (ynu < myn)
			printf("Too Small\n");
	}
	if (flag = 0)
		printf("Game over!");
	system("pause");
	return 0;
}


