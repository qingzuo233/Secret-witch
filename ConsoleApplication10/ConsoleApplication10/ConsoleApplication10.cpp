# include <math.h> 
# include <stdio.h>

int say_hello_to_info_age(void) {
	printf("Hello INFO AGE, i'm lijifei. ");
	return 0;
}

int func_minus2(int j)
{
	int tmp = 0;
	tmp = j - 2;
	return tmp;
}

float func_mult2(float f)
{
	float tmp = 0.f;
	tmp = f * 2;
	return tmp;
}

int c_is_data(void)
{
	//数据第一步：放到计算机里即变量的定义
	int i = -1;           //定义整型变量，初值为0
	int sum = 0;
	float m1 = -0.5f;    //定义浮点型变量，初值为-0.5。后面的f是规定，浮点数要加

						 //数据第二步：处理即变量的处理

						 //变量的处理第1种，用运算符
	i = i - 2;  //对变量i处理(减2)，新值给i。初值变量变成新值变量。
	m1 = m1 * 2;//对变量m1处理(乘2)，新值给m1。初值变量变成新值变量。

				//变量的处理第2种，用函数（别人写好的）
				//比如求j的绝对值，可用运算符，也可调用c标准库函数来直接得到新值。
	i = fabs(i);  //fabs()是函数，输入j，输出返回绝对值。给j，初值变量变成新值变量。
				  //fabs()是c提供的标准库，需在本文件前面包含进来对应他的头文件math.h

				  //变量的处理第2种，用函数（自己写的）
	i = -1;     //i换成初值，为了对比两种处理（运算符和函数）的结果是一致的。
	m1 = -0.5f;
	i = func_minus2(i);  //自定义函数，替换上面i = i + 2;初值变量变成新值变量。
	m1 = func_mult2(m1);  //自定义函数，替换上面i = m1 * 2;初值变量变成新值变量。

						  //补充：数据处理整体流程有3种：顺序分支循环。上面即第一种叫顺序处理流程
						  //下面是第二种叫分支处理流程
	if (i > 0)
	{
		i = -1;
	}
	else
	{
		i = 1;
	}
	//下面是第三种叫循环处理流程
	for (i = 1; i < 11; i++)
	{
		sum = i + sum;
	}

	return 0;
}

int guess_number(void)
{
	int  mynumber = 38;
	int  yournumber;
	printf("Input your number: ");
	scanf("%d", &yournumber);
	if (yournumber == mynumber)
		printf("Ok! you are right!\n");
	else
		if (yournumber > mynumber)
			printf("Sorry! your number is bigger than my number!\n");
		else
			printf("Sorry! your number is smaller than my number!\n");
	return 0;
}

int judge_oddEven(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number % 2 == 0) {
		printf("The number is even. \n");
	}
	else {
		printf("The number is odd. \n");
	}
	return 0;
}

int count_achievment(void)
{
	int count, i, n;
	double grade, total;
	printf("Enter n: ");   scanf("%d", &n);
	total = 0;    count = 0;
	for (i = 1; i <= n; i++) {
		printf("Enter grade #%d: ", i);
		scanf("%lf", &grade);
		total = total + grade;
		if (grade < 60)
			count++;
	}
	printf("Grade average = %.2f\n", total / n);
	printf("Number of failures = %d\n", count);
	return 0;


int caculate_water_section_charge(void)
{
	double x, y;
	printf("Enter x:");
	scanf("%lf", &x);
	if (x < 0) {
		y = 0;
	}
	else if (x <= 15) {
		y = 4 * x / 3;
	}
	else {
		y = 2.5 * x - 10.5;
	}
	printf("f(%.2f) = %.2f\n", x, y);
	return 0;
}

int caculate_four_arithmetic(void) {
	double value1, value2;
	char op;
	printf("Type in an expression: ");
	scanf("%lf%c%lf", &value1, &op, &value2);
	if (op == '+')
		printf("=%.2f\n", value1 + value2);
	else if (op == '-')
		printf("=%.2f\n", value1 - value2);
	else if (op == '*')
		printf("=%.2f\n", value1 * value2);
	else if (op == '/')
		printf("=%.2f\n", value1 / value2);
	else
		printf("Unknown operator\n");
	return 0;
}

int count_counts(void)
{
	int digit, i, letter, other;
	char ch;
	digit = letter = other = 0;
	printf("Enter 10 characters: ");
	for (i = 1; i <= 10; i++) {
		ch = getchar();     /* 从键盘输入一个字符，赋值给变量 ch */
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			letter++;
		else if (ch >= '0' && ch <= '9')   /* 如果ch是数字字符 */
			digit++;
		else
			other++;
	}
	printf("letter = %d, digit = %d, other = %d\n", letter, digit, other);
	return 0;
}

int show_vending_machine(void)
{
	int choice, i;   double price;
	for (i = 1; i <= 5; i++) {
		printf("[1] Select crisps \n");
		printf("[2] Select popcorn \n");
		printf("[3] Select chocolate \n");
		printf("[4] Select cola \n");
		printf("[0] exit \n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		if (choice == 0) break;
		switch (choice) {
		case 1: price = 3.0; break;
		case 2: price = 2.5; break;
		case 3: price = 4.0; break;
		case 4: price = 3.5; break;
		default: price = 0.0; break;
		}
		printf("price = %0.1f\n", price);
	}
	printf("Thanks \n");
	return 0;
}

int caculate_simple_expression(void)
{
	char op;   double value1, value2;
	printf("Type in an expression: ");
	scanf("%lf%c%lf", &value1, &op, &value2);
	switch (op) {
	case '+':
		printf("=%.2f\n", value1 + value2);
		break;
	case '-':
		printf("=%.2f\n", value1 - value2);
		break;
	case '*':
		printf("=%.2f\n", value1*value2);
		break;
	case '/':
		printf("=%.2f\n", value1 / value2);
		break;
	default:
		printf("Unknown operator\n");
		break;
	}
	return 0;
}

int count_counts2(void)
{
	int blank, digit, i, other;  char ch;
	blank = digit = other = 0;
	printf("Enter 10 characters: ");
	for (i = 1; i <= 10; i++) {
		ch = getchar();
		switch (ch) {
		case ' ':
		case '\n':
			blank++;
			break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			digit++;
			break;
		default:
			other++;
			break;
		}
	}
	printf("blank=%d, digit=%d, other=%d\n", blank, digit, other);
	return 0;
}

int caculate_simple_expression2(void) {
	double value1, value2;
	char op;
	printf("Type in an expression: ");
	scanf("%lf%c%lf", &value1, &op, &value2);
	if (op == '+')
		printf("=%.2f\n", value1 + value2);
	else if (op == '-')
		printf("=%.2f\n", value1 - value2);
	else if (op == '*')
		printf("=%.2f\n", value1 * value2);
	else if (op == '/')
		if (value2 != 0)                  /* 嵌套的if，判断除数是否为0 */
			printf("=%.2f\n", value1 / value2);
		else
			printf("Divisor can not be 0!\n");
	else
		printf("Unknown operator!\n");
	return 0;
}


int main(void)
{
	//say_hello_to_info_age();
	//c_is_data();
	//guess_number();
	//judge_oddEven();
	//count_achievment();
	caculate_water_section_charge();
	//caculate_four_arithmetic ();
	//count_counts();
	//show_vending_machine();
	//caculate_simple_expression();
	//count_counts2();
	//caculate_simple_expression2();
	return 0;
}