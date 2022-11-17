#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n = 0;//输入n
	scanf("%d", &n);
	int i = 0;
	int factorial = 1;//保存每一个n的阶乘
	int sum_factorial = 0;//保存阶乘之和
	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		sum_factorial += factorial;
	}
	printf("%d的阶乘之和为  %d\n", n, sum_factorial);
	return 0;
}