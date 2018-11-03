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
			printf("您输入的数小于随机数\n");
		}
		else {
			printf("您输入的数大于随机数\n");
		}
		scanf("%d",&x);
	}
	printf("恭喜你答对了！！\n");
	return 0;
}
