// 2つの整数の2乗値の差を求める

#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main(void)
{
    int x, y;

    puts("2つの値を入力");
    printf("整数値x: "); scanf("%d", &x);
    printf("整数値y: "); scanf("%d", &y);

    printf("xの2乗とyの2乗の差は%dです。\n", diff(sqr(x), sqr(y)));

    return 0;
}