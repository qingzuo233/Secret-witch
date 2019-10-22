#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int x;
	double y;
	printf(" ‰»Îx=");
	scanf("%d", &x);
	if (x < 0) {
		y = pow(x + 1, 2) + 2 * x + 1 / x;
		printf("%.2f", y);
	}
	else {
		y = sqrt(x);
		printf("%.2f", y);
	}

	system("pause");
	return 0;
}