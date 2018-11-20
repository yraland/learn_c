//定义函数中的n没看懂是赋值的那个数    main（）中的power（2,i）如果i赋值给n，i也是未知的呀！
#include <stdio.h>
int power (int m,int n);
int main()
{
	int i;
	for (i = 0;i < 10;i ++)
	{
		printf("%d %d %d\n",i,power(2,i),power(-3,i));
	}
	return 0;
}
int power (int base,int n)
{
	int i,p;
	p=1;
	for (i = 1;i<=n;++i)
		p=p*base;
	return p;
}
