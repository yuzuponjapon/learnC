// 整数を読み込んで正の値の合計値を求める
#include <stdio.h>

int main(void)
{
    puts("正の値の合計値を求めます。(終了は-9999)");

    int sum = 0;
    while (1) {
        int number;

        printf("値を入力してください。: ");
        scanf("%d", &number);

        if (number == -9999)
            break;
        else if (number <= 0)
            continue;
        sum += number;
    }

    printf("合計値は%dです。\n", sum);
    return 0;
}