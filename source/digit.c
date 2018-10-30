//查看数字为几位数

#include <stdio.h>
int main()
{
	int i,n = 0;
	scanf("%d",&i);
	do
	{
		i /= 10;
		n ++;
	} while (i > 0);
	printf ("%d \n",n);
	return 0;
}
