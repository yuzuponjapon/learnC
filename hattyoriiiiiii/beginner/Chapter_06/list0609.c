// 読み込んだ正の整数値を逆順にして表示

#include <stdio.h>

int scan_pint(void)
{
    int tmp;

    do {
        printf("値を入力: ");
        scanf("%d", &tmp);
        if (tmp <= 0)
            puts("\a正でない値を入力しないでください。");
    } while (tmp <= 0);
    return tmp;
}

int rev_int(int num)
{
    int tmp = 0;

    if (tmp > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while(num > 0);
    }
    return tmp;
}

int main(void)
{
    int nx = scan_pint();

    printf("反転した値は%dです。\n", rev_int(nx));
    return 0;
}