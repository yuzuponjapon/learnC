#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{

	int ans;
	int no;
	int cnt = 0;
	int max = log2(333);

	srand(time(NULL));
	ans = ( 1 + rand() % 333) * 3;
printf("ans = %d max = %d\n",ans,max);

	printf("3～999で3の倍数\n");

	do {
		cnt++;
		printf("いくつ(%d回目)？",cnt);
		scanf("%d",&no);
		
		if( ( no % 3) != 0) {
			printf("%dは3の倍数ではない\n",no);
			break;
		}
		
		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");

	} while( no != ans && cnt < max);

	if( no == ans)
		printf("%d回で正解\n",cnt);
	else
		printf("残念\n");	

	return 0;
}
