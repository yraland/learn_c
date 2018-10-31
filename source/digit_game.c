#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int sum;
	int x;
	sum = rand()%100;
	scanf("%d",&x);
	while (x!=sum)
	{
		if(x<sum){
			printf("小于\n");
		}
		else {
			printf("大于\n");
		}
		scanf("%d",&x);
	}
	printf("等于\n");
	return 0;
}
