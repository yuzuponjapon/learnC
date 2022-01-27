// 整数値を次々と読み込んで、合計と平均の表示

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("整数値を入力");
        scanf("%d", &t);

        sum = sum + t;
        cnt = cnt + 1;

        printf("続けますか？(0..Yes / 9..No)");
        scanf("%d", &retry);
    } while (retry == 0);

    printf("合計は%dで、平均は%.2fです。\n", sum, (double)sum / cnt);

    return 0;
}