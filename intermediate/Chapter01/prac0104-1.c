#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{

	int ans;
	int no;
	int cnt = 0;

	srand(time(NULL));
	ans = ( rand() % 112) * 3;

	int max = 7;  /*log2(ans);*/
printf("%d\n",ans);

	printf("3～999まで3の倍数を%d回で当てて\n",max);

	do {
		printf("%d回目 >",cnt + 1);
		scanf("%d",&no);

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
		cnt++;	
	} while( no != ans && cnt < max); 

	if( no == ans)
		printf("%d回で正解です\n",cnt);
	else
		printf("残念\n");

	return 0;
}
