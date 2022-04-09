#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int no;
	int ans;

	srand( time(NULL));
	ans = rand() % 1000;

	printf("０から９９９\n");

	do {
		printf("no >");
		scanf("%d",&no);

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
	} while( no != ans);

	printf("正解です\n");

	return 0;
}
