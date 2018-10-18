#include <stdio.h>
int main()
{
	int a,b,c,sum;
	printf("\a请分别输入三个数a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a;
	if(b>a) sum=b;
        if(c>b) sum=c;
	printf("\asum = %d\n\n",sum);	
	return 0;
}
