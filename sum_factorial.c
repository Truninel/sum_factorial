#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//�������ս��
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int ret = 1;//����n�Ľ׳�
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