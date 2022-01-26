// 3つの整数の最大値を求める

#include <stdio.h>

int max3(n1, n2, n3)
{
    int max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    return max;
}

int main(void)
{
    int n1, n2, n3;

    printf("n1を入力"); scanf("%d", &n1);
    printf("n2を入力"); scanf("%d", &n2);
    printf("n3を入力"); scanf("%d", &n3);

    printf("最大値は%dです。\n", max3(n1, n2, n3));

    return 0;
}