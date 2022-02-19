// 左下直角の直角二等辺三角形を表示
#include <stdio.h>

//--- 記号文字'*'をn個連続で表示 ---//
void put_stars(int n)
{
    while (n-- > 0)
        putchar('*');
}

int main(void)
{
    int length;

    printf("短辺を入力: ");
    scanf("%d", &length);

    for (int i = 1; i <= length; i++) {
        put_stars(i);
        putchar('\n');
    }

    return 0;
}