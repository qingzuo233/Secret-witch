#include "stdio.h"
#include "math.h"
#include "iostream"


int main(void)
{
	int choice, i,z,c;
	int number1 = 49;
	int number2;
	double price;
	for (i = 1; i <= 5; i++) {
		printf("[1]apples.\n");
		printf("[2]pears.\n");
		printf("[3]oranges.\n");
		printf("[4]grapes.\n");
		printf("[5]小游戏赢折扣.\n");
		printf("[0]exit.\n");
		printf("请输入编号;");
		scanf("%d", &choice);
		if (choice == 0)
			break;
		switch (choice) {
		case 1:price = 3.00; break;
		case 2:price = 2.50; break;
		case 3:price = 4.10; break;
		case 4:price = 10.20; break;
		case 5:printf("想要以优惠价购买吗，赢得小游戏即可享受折扣。\n"); break;
			printf("游戏规则;与计算机产生的被猜数进行比较，若相等，显示猜中并享受5折优惠；若不等，显示与被猜数的大小关系，三次机会失败后退出游戏。\n");
			for (z = 1; z <= 3; z++) {
					printf（"输入你的数字：");
					scanf("%d",number2);
					if (number1 == number2);
					printf("恭喜你赢得了五折的折扣！\n");
					{for (c = 1; c <= 5; c++) {
						printf("[1]apples.\n");
						printf("[2]pears.\n");
						printf("[3]oranges.\n");
						printf("[4]grapes.\n");
						printf("[0]exit.\n");
						printf("请输入编号;");
						scanf("%d", &choice);
						if (choice == 0)
							break;
						switch (choice) {
						case 1:price = 1.50; break;
						case 2:price = 1.25; break;
						case 3:price = 2.05; break;
						case 4:price = 5.10; break;
						}
					}

					printf("价格=%0.1f\n", price);
					}
						else 
					 if(number2>number1)


				


		}
		printf("价格=%0.1f\n",price);
	}
	printf("谢谢使用。\n");
	system("pause");
	return 0;
}


