#include <math.h> // in libm.so on linux
#include <stdio.h>

// gcc -o executable source.c -lm
// -l: prefix: lib suffix .so
// -l(xxx) = lib(xxx).so
// -lm = libm.so

int add(int i, int j)
{
    return i + j;
}

double minus(double i, double j)
{
    return i - j;
}

int multiply(int i, int j)
{
    return i * j;
}

double divide(double i, double j)
{
    return i / j;
}

int surpuls(char i, char j)
{
    double n;
    n = i % j;
    return n;
}

int factorial(double i, double j)
{
    int sum = 1;
    for (i; i <= j; i++) {
        sum = sum * i;
    }
    return sum;
}

int sum(int i, int j)
{
    int sum = 0;
    for (i; i <= j; i++) {
        sum = sum + i;
    }
    return sum;
}

double geng(double i)
{
    return sqrt(i);
}

int main()
{
    int c;
    float s;
    double i, j;
    printf("请输入数学1——9进行数学运算功能:\n  1.相加\n  2.相减\n  3.相乘\n  4.相除\n  5.求余\n  6.阶乘\n  7.累计求和\n  8.求平方根\n  9.退出\n");
    while (c != 9) {
        printf("请输入你想要运算代表的数字：\n");
        scanf("%d", &c);
        switch (c) {
        case 1:
            printf("请输入你想计算的数字：");
            scanf("%lf %lf", &i, &j);
            printf("%lf+%lf=%d\n", i, j, add(i, j));
            break;
        case 2:
            printf("请输入你想计算的数字：");
            scanf("%lf %lf", &i, &j);
            printf("%lf-%lf=%lf\n", i, j, minus(i, j));
            break;
        case 3:
            printf("请输入你想计算的数字：");
            scanf("%lf %lf", &i, &j);
            printf("%lf*%lf=%d\n", i, j, multiply(i, j));
            break;
        case 4:
            printf("请输入你想计算的数字：");
            scanf("%lf %lf", &i, &j);
            printf("%lf/%lf=%lf\n", i, j, divide(i, j));
            break;
        case 5:
            printf("请输入你想计算的数字：");
            scanf("%lf %lf", &i, &j);
            printf("%lf %% %lf=%d\n", i, j, surpuls(i, j));
            break;
        case 6:
            printf("请输入一个数乘到另一个数的值：");
            scanf("%lf %lf", &i, &j);
            printf("%lf!=%d\n", j, factorial(i, j));
            break;
        case 7:
            printf("请输入一个数加到另一个数的值：");
            scanf("%lf %lf", &i, &j);
            printf("%lf!=%d\n", j, sum(i, j));
            break;
        case 8:
            printf("请输入被开方数：");
            scanf("%lf", &i);
            s = geng(i);
            printf("%lf^2=%f\n", i, s);
            break;
        }
    }
    return 0;
}
