#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int score[NUMBER];
    int sum = 0;

    printf("点数を入力:\n");
    for (int i = 0; i < NUMBER; i++) {
        printf("%d番目の点数: ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("合計点は: %5d\n", sum);
    printf("平均点は : %5.1f\n", (double)sum / NUMBER);

    return 0;
}