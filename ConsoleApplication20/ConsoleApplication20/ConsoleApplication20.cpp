#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	int number, letter, space, other,i;
	char ch;
	number = letter = space = other = 0;
	printf("键入十个字符：");
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
	printf("字母有%d个\n数字有%d个\n空格或回车有%d个\n其他字符有%d个", letter, number, space, other);
	system("pause");
	return 0;
}