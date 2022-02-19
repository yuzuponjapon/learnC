#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(const int v[], int key, int n)
{
    int i = 0;

    while (1) {
        if (i == n)
            return FAILED;
        if (v[i] == key)
            return i;
        i++;
    }
}


int main(void)
{
    int ky, idx;
    int x[NUMBER];

    for (int i = 0; i < NUMBER; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("探す値を入力してください: ");
    scanf("%d", &ky);

    idx = search(x, ky, NUMBER);

    if (idx == FAILED)
        printf("ありませんでした。\n");
    else
        printf("%d番目の要素で見つかりました。\n", idx);
    
    return 0;
}