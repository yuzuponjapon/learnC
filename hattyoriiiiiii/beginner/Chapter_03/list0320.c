// 読み込んだ整数値を3で割った剰余を表示
#include <stdio.h>

int main(void)
{
    int number;

    printf("値を入力してください: ");
    scanf("%d", &number);

    switch (number % 3) {
        case 0 : puts("0"); break;
        case 1 : puts("1"); break;
        case 2 : puts("2"); break;
    }

    return 0;
}