// tiger_chapter4_job.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>
#include<iostream>
//ch41(运算结果为0，因为只有当item的绝对值大于0.0001时才会进行循环。不会）
//ch42(没有变化，和-1一样都打断循环。运行结果为0，因为没有数据）
int ch43_caculate_sum()
{
	double he, item, eps, flag, fm;
	he = 0;
	flag = 1;
	fm = 1;
	item = 1.0;
	printf("输入一个正实数eps:\n");
	scanf("%lf", &eps);
	while (fabs(item) >= eps) {
		item = flag*1.0 / fm;
		he = he + item;
		flag = -flag;
		fm = fm + 3;
	}
	printf("序列和为%lf\n", he);
	system("pause");

	return 0;
}
//ch44（会，因为dowhile会先循环一次，而while先判断是否满足条件，加一条number=number/10在循环前）
//ch45(不可以，用下列语句代替后，每一次判断都会输出一次)
int ch46_guess_num()
{
	int myn, ynu, n, i, flag = 0;
	printf("请输入mynumber和允许猜测的最大次数n,用空格隔开.\n");
	scanf("%d%d", &myn, &n);
	printf("-----------LOADING------------\n");
	for (i = 0; i <= n; i++) {
		printf("请输入yournumber\n");
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
//ch48(结果为0，增加一个当输入0时自动提示并结束程序的语句)
//ch49(运行结果就是输入的负数，这个题就有问题，啥叫如何应对这种情况？你输错就不能重新运行一下？输错了还要别人给你擦屁股？巨婴？
//你要是实在是要应对，就把while替换成dowhile。但是我还是想不明白为啥不重新开程序。)
int ch410_smallest_num()
{
	int i,n, mark, sma;
	printf("输入n的值\n");
	scanf("%d", &n);
	printf("输入第一个成绩\n");
	scanf("%d", &mark);
	sma = mark;
	for (i = 1; i < n; i++) {
		if (mark < sma)
			sma = mark;
		printf("输入下一个成绩\n");
		scanf("%d", &mark);
	}
	printf("最小值为%d", sma);
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

