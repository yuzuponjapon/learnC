#include <stdio.h>

#define NUMBER 120

int main(void)
{
    int num;
    int score[NUMBER];
    int bunpu[11] = {0};  // 全要素を0で初期化

    printf("人数の入力");

    // 人数をNUMBERに制限
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1~%dで入力してください。: ", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d の点数を入力", num);
    // scoreを10~100に制限
    for (int i = 0; i < num; i++) {
        printf("%2d番目: ", i + 1);

        // 制限
        do {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100)
                printf("\a0~100で入力してください。: ");
        } while (score[i] < 0 || score[i] > 100);
        bunpu[score[i] / 10]++;
    }

    puts("\n---分布グラフ---");
    printf("     100: ");
    for (int i = 0; i < bunpu[10]; i++)
        putchar('*');
    putchar('\n');

    for (int i = 9; i >= 0; i--) {
        printf("%3d ~%3d: ", i * 10, i * 10 + 9);
        for (int j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}