#include<stdio.h>
#include<math.h>
#include<iostream>
int main()
{
	double x1, x2, x3, y1, y2, y3, a, b, c, L, A, s, delta;
	printf("输入三个点的坐标，用空格隔开\n");
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));//两点间距离公式，下同。
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	s = (a + b + c) / 2;
	delta = (s - a)*(s - b)*(s - c);//用delta判别是否能成为三角形
	if (delta <= 0)
		printf("Impossible\n");
	else
	{
		L = 2 * s;
		A = sqrt(s*delta);
		printf("L = %.2lf, A = %.2lf\n", L, A);
	}
	system("pause");
	return 0;
}