#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int retry;

	printf("乱数範囲 0～%d\n",RAND_MAX);

	do {
		printf("乱数　＞%d\n",rand());
		printf("retry? [yes 1, no 0] :");
		scanf("%d",&retry);
	} while( retry == 1);

	return 0;
}
