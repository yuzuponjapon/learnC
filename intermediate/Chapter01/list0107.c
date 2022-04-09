#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	srand(time(NULL));

	int no;
	int ans;
	int cnt = 0;

	ans = rand() % 1001;

	printf("０～１０００の整数を当ててください。\n");

	do {
		cnt++;
		printf("いくつかな%d回目　＞",cnt);
		scanf("%d",&no);

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
	} while( no != ans && cnt < 10);


	if( no == ans)
		printf("%d回目で正解です\n",cnt);
	else
		printf("終了です\n");

	return 0;
}
