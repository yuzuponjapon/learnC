/*
    長方形の面積を求める
*/

#include <stdio.h>

int main(void)
{
    int width;
    int height;

    puts("長方形の面積を求めます");

    printf("width: ");
    scanf("%d", &width);

    printf("height: ");
    scanf("%d", &height);

    // 表示
    printf("面積は%dです。\a\n", width * height);

    return 0;
}