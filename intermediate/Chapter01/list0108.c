#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 15 


int main(void)
{

	int no;
	int cnt = 0;
	int log[MAX];
	int ans;

	srand(time(NULL));
	ans = rand() % 1001;

	printf("０～１０００であてて\n");

	do {
		printf("いくつかな残り%d回　＞",MAX - cnt);
		scanf("%d",&no);
		log[cnt] = no;

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");

		cnt++;	
	} while( no != ans && cnt < MAX);

	if( no == ans)
		printf("%d回で正解です\n",cnt);
	else
		printf("残念\n");
	
	printf("結果  入力値 誤差\n");

	int k_cnt;
	for( k_cnt = 0; k_cnt < cnt; k_cnt++) {
		printf("%2d回目:%5d%+5d\n",k_cnt + 1,log[k_cnt],log[k_cnt] - ans);	
	}

	return 0;
}
