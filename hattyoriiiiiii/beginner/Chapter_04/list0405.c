// 読み込んだ整数値を0までカウントダウン

#include <stdio.h>

int main(void)
{
    int number;

    printf("正の整数を入力せよ。: ");
    scanf("%d", &number);

    while (number >= 0) {
        printf("%d ", number);
        number--;
    }
    printf("\n");
    return 0;
}