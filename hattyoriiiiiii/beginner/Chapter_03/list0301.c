// 読み込んだ整数値は5で割り切れないか

#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください");
    scanf("%d", &n);

    if (n % 5)
        puts("5で割り切れません。");
    else
        puts("5で割り切れます。");

    return 0;
}