#include<stdio.h>
#include<math.h>
#include<iostream>
int main()
{
	double x1, x2, x3, y1, y2, y3, a, b, c, L, A, s, delta;
	printf("��������������꣬�ÿո����\n");
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));//�������빫ʽ����ͬ��
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	s = (a + b + c) / 2;
	delta = (s - a)*(s - b)*(s - c);//��delta�б��Ƿ��ܳ�Ϊ������
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