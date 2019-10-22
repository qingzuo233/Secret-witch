#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int count, i, n;
	double grade, total;
	printf("请输入学生人数\n");
	scanf("%d", &n);
	total = 0;
	count = 0;
	for (i = 1; i <= n; i++) {
		printf("请输入第%d个成绩\n", i);
		scanf("%1f", &grade);
		total = total + grade;
		if (grade > 60) {
			count++;
		}
	}
	printf("平均成绩为%.2f\n", total / n);
	printf("及格人数为%d\n", count);
	system("pause");
	return 0;
}