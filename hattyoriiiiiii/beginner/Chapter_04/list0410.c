// 読み込んだ正の整数を逆順に表示

#include <stdio.h>

int main(void)
{
    int number;

    do {
        printf("正の整数を入力せよ。: ");
        scanf("%d", &number);
        if (number <= 0)
            puts("\a正でない数値を入力しないでください。");
    } while (number <= 0);

    printf("その値を逆から読むと、\n");
    while (number > 0) {
        printf("%d", number % 10);
        number /= 10;
    }
    printf("です。\n");

    return 0;
}