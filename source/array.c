#include <stdio.h>
#define SIZE 10
int main()
{
	int x[SIZE], i, max, min, sum = 0;
	printf("Enter 10 integers:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d:", i + 1);
		scanf("%d", &x[i]);
	}
	return 0;
}
