#include <stdio.h>
#define NUMBER 5

int main(void)
{
    int a[NUMBER];  // コピー元
    int b[NUMBER];  // コピー先

    for (int i = 0; i < NUMBER; i++) {
        printf("値の入力 (%2d番目/%2d中)", i + 1, NUMBER);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < NUMBER; i++)
        b[i] = a[i];
    
    puts("  a    b");
    puts("---------");

    for (int i = 0; i < NUMBER; i++)
        printf("%4d%4d\n", a[i], b[i]);
    
    return 0;
}