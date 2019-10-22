#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double x, y = 0.00;
	printf(" ‰»Îx=");
	scanf("%lf", &x);
	if(x==0){

		printf("x=0");
	}
	else {
		(y = 1 / x);
		printf("%1f", y);
	}

		system("pause");
	return 0;
}