// for文で読み込んだ正数値までカウントアップ
#include <stdio.h>

int main(void)
{
    int number;

    printf("値を入力: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
        printf("%d ", i);
    putchar('\n');

    return 0;
}