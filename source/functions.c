#include <stdio.h>
int a (int n)
{
	int i,sum;
	for (i = 1;i <= n;i ++)
	{
		sum += i;
	}
	return sum;
}
void main()
{
	int n,b;
	printf ("请输入加到的数：");
	scanf ("%d",&n);
	b = a (n);
	printf ("1+2+3+....+n=%d\n",b);
}
