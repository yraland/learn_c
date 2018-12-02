#include <stdio.h>
void sum(int j)
{
	int sum=0;
	for (int i = 1;i <= j;i ++)
	{
		sum += i;
	}
	printf("1+2+3+...+%d=%d\n",j,sum);
}
int main()
{
	sum(100);
	return 0;
}

