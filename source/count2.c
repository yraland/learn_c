#include <stdio.h>
int main()
{
	float a,b,c,d;
	
	printf("请输入a=");
	scanf("%f",&a);
	printf("请输入b=");
	scanf("%f",&b);
	printf("去请输入c=");
	scanf("%f",&c);
         
	while(c == 0){
		printf("c 不能为0， 请重新输入 c=\a");
		scanf("%f", &c); // c = 1
	}

	d=a*b/c;
	printf("正在计算  %g * %g / %g = %g\n\n",a,b,c,d);
	return 0;
}
