# include <math.h> 

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

int main(void)
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

						  //3种数据处理流程：顺序分支循环。上面即第一种叫顺序处理流程
						  //下面是第二种叫分支处理流程
	

return 0;
}
