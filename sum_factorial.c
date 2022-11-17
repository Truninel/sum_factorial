#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int ret = 1;//保存n的阶乘
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;//ret=ret*j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}