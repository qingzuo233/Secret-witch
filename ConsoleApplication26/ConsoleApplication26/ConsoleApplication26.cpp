#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int count, num;					/* num ��¼����ĸ�����count��¼������ѧ������ */
	double grade, total;			/* �ֱ��ųɼ����ɼ�֮�� */

	num = 0;
	total = 0;
	count = 0;
	printf("Enter grades: ");		/* ������ʾ */
	scanf("%lf", &grade);			/* �����һ�����ݣ�%lf�е�l����ĸ */

									/* ���������� grad ���ڵ���0ʱ��ִ��ѭ�� */
	while (grade >= 0) {
		total = total + grade;		/* �ۼӳɼ� */
		num++;						/* ���� */
		if (grade < 60)
			count++;
		scanf("%lf", &grade);		/* ����һ�������ݣ�Ϊ�´�ѭ����׼�� */
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