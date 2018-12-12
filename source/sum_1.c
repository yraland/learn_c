//累计求和
#include <stdio.h>
int sum1(int n)
{
    int sum = 0;
    int i;
    for(i = 1;i <= n;i ++)
    {
        sum += i;
    }
    return sum;
}
int sum2(int n)
{
    if((n == 1) || (n == 0))
    {
        return 1;
    }
    else
    {
        return sum2(n-1)+n;
    }
}
void main()
{
    int n;
    printf("请输入想要加到的数字：");
    scanf("%d",&n);
    printf("普通算法：1+2+...+%d=%d\n",n,sum1(n));
    printf("递归算法：1+2+...+%d=%d\n",n,sum2(n));
}
