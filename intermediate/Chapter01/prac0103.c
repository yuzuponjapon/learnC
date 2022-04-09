#include <stdio.h>
#include <time.h>
#include <math.h>

#define MAX 11

int main(void)
{
	int ans;
	int no;
	int cnt = 0;
	int log[MAX];

	int kaisuu = log2(2000);
	srand(time(NULL));
	ans = rand() % 1999 - 999;
printf("%d",ans);

	printf("ー９９９～９９９まで,%d回で当てて\n",kaisuu);

	do {
		printf("いくつかな >");
		scanf("%d",&no);

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");

		log[cnt] = no;
		cnt++;
	} while( no != ans && cnt < kaisuu );	

	if( no == ans)
		printf("%d回で正解です\n",cnt);
	else
		printf("残念\n");

	return 0;
}
