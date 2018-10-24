#include <stdio.h>
int main()
{
	int n,sum;
	printf("输入在一行中给出整数n: \n");
	n=getchar();
	sum=n;
	  if(n < '0')
		 printf("sign( %d ) = -1\n",sum);
	  else if(n == '0')
		 printf("sign( %d ) = 0\n",sum);
	  else 
		 printf("sign( %d ) = 1\n",sum); 
	return 0;
}
