// 読み込んだ整数値が、奇数か偶数か

#include <stdio.h>

int main(void)
{
    int retry;

    do {
        int number;

        printf("整数を入力してください: ");
        scanf("%d", &number);

        if (number % 2)
            puts("奇数です");
        else
            puts("偶数です");
        
        printf("Again? (Yes..0, No..9)");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}