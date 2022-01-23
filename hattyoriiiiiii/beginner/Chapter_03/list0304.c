// 奇数偶数判定

#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください。");
    scanf("%d", &n);

    if (n % 2)
        puts("奇数です。");
    else
        puts("偶数です。");

    return 0;
}