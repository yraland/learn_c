#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("请输入a=");
	scanf("%f",&a);
	printf("请输入b=");
	scanf("%f",&b);
	printf("请输入d=");
	scanf("%f",&d);
	c=a*b/d;
	printf("正在计算%g * %g / %g=%g\n\n",a,b,d,c);
	return 0;
}
