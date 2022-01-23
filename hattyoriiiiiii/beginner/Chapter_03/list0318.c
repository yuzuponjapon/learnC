// 読み込んだ月の季節を表示
#include <stdio.h>

int main(void)
{
    int month;

    printf("何月？:");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        printf("%dは春です。\n", month);
    else if (month >= 6 && month <= 8)
        printf("%dは夏です。\n", month);
    else if (month >= 9 && month <= 11)
        printf("%dは秋です。\n", month);
    else if (month == 1 || month == 2 || month == 12)
        printf("%dは冬です。\n", month);
    else
        printf("%dは月ではありません。\a\n", month);
    
    return 0;
}