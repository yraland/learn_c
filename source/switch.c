#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch (a)
	{
		case 1:
		case 2:
			printf("你好\n");
			break;
		case 3:
			printf("晚上好");
		case 4:
			printf("再见\n");
			break;
		default:
			printf("啊，什么呀?\n");
			break;
	}
	return 0;
}
