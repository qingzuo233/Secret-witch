#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int count, num;					/* num 记录输入的个数，count记录不及格学生人数 */
	double grade, total;			/* 分别存放成绩、成绩之和 */

	num = 0;
	total = 0;
	count = 0;
	printf("Enter grades: ");		/* 输入提示 */
	scanf("%lf", &grade);			/* 输入第一个数据，%lf中的l是字母 */

									/* 当输入数据 grad 大于等于0时，执行循环 */
	while (grade >= 0) {
		total = total + grade;		/* 累加成绩 */
		num++;						/* 计数 */
		if (grade < 60)
			count++;
		scanf("%lf", &grade);		/* 读入一个新数据，为下次循环做准备 */
	}
	if (num != 0) {
		printf("Grade average is %.2f\n", total / num);
		printf("Number of failures is %d\n", count);
	}
	else
		printf("Grade average is 0\n");
	system("pause");
	return 0;
}