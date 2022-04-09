#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{


	int no,max,min;
	int ans;
	int cnt = 0;
	int m_time;

	srand(time(NULL));
	min = rand() % 1000;
	max = rand() % 1000;
	if( min > max) {
		int tmp;
		tmp = min;
		min = max;
		max = tmp;
	}

	ans = rand() % ( max - min + 1) + min;
printf("max = %d: min = %d: ans = %d\n",max,min,ans);

	m_time = log2((double)ans);

	printf("%d ～ %d　の数字を%d回以内で当てて\n",min,max,m_time);		

	do {
		cnt++;
		printf("いくつ？(%d回目) >",cnt);
		scanf("%d",&no);

		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
	} while( no != ans && cnt < m_time);

	if( no == ans)
		printf("%d回で正解です\n",cnt);
	else
		printf("正解は%dです。残念\n",ans);

	return 0;
}
