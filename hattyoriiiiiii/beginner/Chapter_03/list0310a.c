// 読み込んだ値が正であれば、奇数偶数判定

#include <stdio.h>

int main(void)
{
    int n;

    printf("整数値を入力してください。");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 2)
            puts("奇数です。");
        else
            puts("偶数です。");
    } else {
        puts("正ではない値が入力されました。\a");
    }

    return 0;
}