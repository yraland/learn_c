//定义函数中的n没看懂是赋值的那个数    main（）中的power（2,i）如果i赋值给n，i也是未知的呀！
#include <stdio.h>
int power (int m,int n);
int main()
{
	int i;
	for (i = 0;i < 10;i ++)
	{
		printf("%d^%d=%d\t\t",2,i,power(2,i));
		printf("%d^%d=%d\n",-3, i, power(-3, i)); 
	}
	printf("%d^%d=%d\n", 0, 0, power(0, 0));
	printf("%d^%d=%d\n", 0, -1, power(0, -1));
	return 0;
}

int power (int base,int n)
{
	// base ^ -2 = (1/base)^2
	// base ^ 0 = 1
	// base ^ 2 = base * base, 2 times;
	// base ^ 3 = base * base * base, 3 times;
	// base ^ n = base * ... * base, n times;
	int p;
	if(n == 0){
		if(base == 0){
			printf("Zero raised to zero is undefined");
			return;
		}
		p = 1;
	}else if(n < 0){
		if(base == 0){
			printf("error");
			return;
		}
		int revBase = 1 / base;
		int tmp = revBase;
		if ( n == -1){
			return tmp;
		}
		for (int i = 2; i <= (-n); i++){
			tmp = revBase * tmp;
		}
		p = tmp;
	}else{
		int tmp = base;
		if (n == 1){
			return base;
		}
		for (int i = 2; i <= n; i++){
			tmp = base * tmp;
		}
		p = tmp;
	}
	return p;	
}
