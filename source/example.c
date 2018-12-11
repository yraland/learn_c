#include <stdio.h>
int main()
{
    int i, j;
    int a[3][4] = { 23, -1, 45, 42, 78, 34, -4, -43, 12, 41, -31, -66 };
    printf("输出所有负数：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j] < 0)
                printf("%d\t", a[i][j]);
        }
    }
    printf("\n");
    return 0;
}
