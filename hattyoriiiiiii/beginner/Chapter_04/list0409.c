// 指定された個数だけ整数を読み込んで合計値と平均値を出力

#include <stdio.h>

int main(void)
{
    int num;

    printf("なんこ？: ");
    scanf("%d", &num);

    int i = 0;
    int sum = 0;

    while (i < num) {
        int temp;
        printf("No.%d: ", ++i);
        scanf("%d", &temp);
        sum += temp;
    }

    printf("合計値 : %d\n", sum);
    printf("平均値 : %.2f\n", (double)sum / num);

    return 0;
}