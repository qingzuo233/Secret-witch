// tiger_chapter4_job.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<math.h>
#include<iostream>
//ch41(������Ϊ0����Ϊֻ�е�item�ľ���ֵ����0.0001ʱ�Ż����ѭ�������ᣩ
//ch42(û�б仯����-1һ�������ѭ�������н��Ϊ0����Ϊû�����ݣ�
int ch43_caculate_sum()
{
	double he, item, eps, flag, fm;
	he = 0;
	flag = 1;
	fm = 1;
	item = 1.0;
	printf("����һ����ʵ��eps:\n");
	scanf("%lf", &eps);
	while (fabs(item) >= eps) {
		item = flag*1.0 / fm;
		he = he + item;
		flag = -flag;
		fm = fm + 3;
	}
	printf("���к�Ϊ%lf\n", he);
	system("pause");

	return 0;
}
//ch44���ᣬ��Ϊdowhile����ѭ��һ�Σ���while���ж��Ƿ�������������һ��number=number/10��ѭ��ǰ��
//ch45(�����ԣ��������������ÿһ���ж϶������һ��)
int ch46_guess_num()
{
	int myn, ynu, n, i, flag = 0;
	printf("������mynumber������²��������n,�ÿո����.\n");
	scanf("%d%d", &myn, &n);
	printf("-----------LOADING------------\n");
	for (i = 0; i <= n; i++) {
		printf("������yournumber\n");
		scanf("%d", &ynu);
		if (ynu < 0)
			break;
		if (ynu == myn) {
			if (i == 1)
				flag = 1;
			printf("Bingo!\n");
			break;
			if (i == 2 || i == 3)
				flag = 1;
			printf("Lucky You\n");
			break;
			if (i > 3)
				flag = 1;
			printf("Good Guess!\n");
			break;
		}
		if (ynu > myn)
			printf("Too Big\n");
		if (ynu < myn)
			printf("Too Small\n");
	}
	if (flag = 0)
		printf("Game over");
	system("pause");
	return 0;
}
int ch47_eee_num()
{
	int n, i, i_2;
	double e = 1;
	double sum = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (i_2 = 1; i_2 <= i; i_2++) {
			sum = sum*i_2;
		}
		e = e + 1.0 / sum;
		sum = 1;
	}
	printf("%.4f", e);
	system("pause");
	return 0;
}
//ch48(���Ϊ0������һ��������0ʱ�Զ���ʾ��������������)
//ch49(���н����������ĸ����������������⣬ɶ�����Ӧ����������������Ͳ�����������һ�£�����˻�Ҫ���˸����ƨ�ɣ���Ӥ��
//��Ҫ��ʵ����ҪӦ�ԣ��Ͱ�while�滻��dowhile�������һ����벻����Ϊɶ�����¿�����)
int ch410_smallest_num()
{
	int i,n, mark, sma;
	printf("����n��ֵ\n");
	scanf("%d", &n);
	printf("�����һ���ɼ�\n");
	scanf("%d", &mark);
	sma = mark;
	for (i = 1; i < n; i++) {
		if (mark < sma)
			sma = mark;
		printf("������һ���ɼ�\n");
		scanf("%d", &mark);
	}
	printf("��СֵΪ%d", sma);
	system("pause");
	return 0;
	}
int ch411_sushu_num()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int i;
	int count = 0, sum = 0;

	for (m; m <= n; m++) {
		int m_1;
		m_1 = sqrt(m);
		for (i = 2; i <= m_1; i++) {
			if (m%i == 0) {
				break;
			}
		}
		if (i > m_1) {
			if (m == 1) {
				count = count;
			}
			else {
				sum += m;
				count++;
			}

		}

		printf("%d %d", count, sum);
		return 0;
	}
}
int main()
{
	//ch43_caculate_sum();
	//ch46_guess_num();
	//ch47_eee_num();
	//ch410_smallest_num();
	ch411_sushu_num();
	return 0;
}

