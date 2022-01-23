// switch分の動作確認

#include <stdio.h>

int main(void)
{
    int sw;

    printf("値の入力");
    scanf("%d", &sw);

    switch (sw) {
        case 1  : puts("A"); puts("B");break;
        case 2  : puts("C"); break;
        case 5  : puts("D"); break;
        case 6  : 
        case 7  : puts("E"); break;
        default : puts("F"); break;
    }

    return 0;
}