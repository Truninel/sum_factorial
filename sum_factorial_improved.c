#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n = 0;//����n
	scanf("%d", &n);
	int i = 0;
	int factorial = 1;//����ÿһ��n�Ľ׳�
	int sum_factorial = 0;//����׳�֮��
	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		sum_factorial += factorial;
	}
	printf("%d�Ľ׳�֮��Ϊ  %d\n", n, sum_factorial);
	return 0;
}