#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int number, letter, space, other,i;
	char ch;
	number = letter = space = other = 0;
	printf("����ʮ���ַ���");
	for (i = 1; i <= 10; i++) {
		ch = getchar();
		if ((ch >= 'a'&&ch <= 'z') || ch >= 'A'&&ch <= 'Z')
			letter++;
		else if (ch >= '0'&&ch <= '9')
			number++;
		else if (ch == ' ')
			space++;
		else if (ch == '\r')
			space++;
		else
			other++;

	}
	printf("��ĸ��%d��\n������%d��\n�ո��س���%d��\n�����ַ���%d��", letter, number, space, other);
	system("pause");
	return 0;
}