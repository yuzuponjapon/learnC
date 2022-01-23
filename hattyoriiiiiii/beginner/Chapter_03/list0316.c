// 読み込んだ2つの整数値の差を求めて表示
#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("値の入力");
    printf("n1: "); scanf("%d", &n1);
    printf("n2: "); scanf("%d", &n2);

    printf("それらの差は%dです。\n", n1 > n2 ? n1 - n2 : n2 - n1);

    int max = n1 > n2 ? n1 : n2;
    printf("最大値は%dです。\n", max);
    return 0;
}