#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int count, i, n;
	double grade, total;
	printf("������ѧ������\n");
	scanf("%d", &n);
	total = 0;
	count = 0;
	for (i = 1; i <= n; i++) {
		printf("�������%d���ɼ�\n", i);
		scanf("%1f", &grade);
		total = total + grade;
		if (grade > 60) {
			count++;
		}
	}
	printf("ƽ���ɼ�Ϊ%.2f\n", total / n);
	printf("��������Ϊ%d\n", count);
	system("pause");
	return 0;
}