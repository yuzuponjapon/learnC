// 右下が直角の直角二等辺三角形を表示
#include <stdio.h>

int main(void)
{
    int length;

    printf("短辺: ");
    scanf("%d", &length);

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length -i; j++)
            putchar(' ');
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}