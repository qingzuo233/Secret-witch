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
		printf("[5]С��ϷӮ�ۿ�.\n");
		printf("[0]exit.\n");
		printf("��������;");
		scanf("%d", &choice);
		if (choice == 0)
			break;
		switch (choice) {
		case 1:price = 3.00; break;
		case 2:price = 2.50; break;
		case 3:price = 4.10; break;
		case 4:price = 10.20; break;
		case 5:printf("��Ҫ���Żݼ۹�����Ӯ��С��Ϸ���������ۿۡ�\n"); break;
			printf("��Ϸ����;�����������ı��������бȽϣ�����ȣ���ʾ���в�����5���Żݣ������ȣ���ʾ�뱻�����Ĵ�С��ϵ�����λ���ʧ�ܺ��˳���Ϸ��\n");
			for (z = 1; z <= 3; z++) {
					printf��"����������֣�");
					scanf("%d",number2);
					if (number1 == number2);
					printf("��ϲ��Ӯ�������۵��ۿۣ�\n");
					{for (c = 1; c <= 5; c++) {
						printf("[1]apples.\n");
						printf("[2]pears.\n");
						printf("[3]oranges.\n");
						printf("[4]grapes.\n");
						printf("[0]exit.\n");
						printf("��������;");
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

					printf("�۸�=%0.1f\n", price);
					}
						else 
					 if(number2>number1)


				


		}
		printf("�۸�=%0.1f\n",price);
	}
	printf("ллʹ�á�\n");
	system("pause");
	return 0;
}


