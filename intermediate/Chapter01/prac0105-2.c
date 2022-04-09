#include <stdio.h>
#include <time.h>
#include <math.h>



int main(void)
{

	int no,ans,high,low;
	int cnt = 0;
	int kaisuu;
	int log[20] = {0};

	srand(time(NULL));
	high = rand() % 1000;
	low = rand() % 1000;
	if( high < low) {
		int tmp;
		tmp = high;
		high = low;
		low = tmp;
	}
	kaisuu = log2( high - low);	
	ans = low + rand() % ( high - low + 1);
printf("high = %d low = %d ans = %d kaisuu = %d\n",high,low,ans,kaisuu);

	printf("%d～%dの範囲：%d回で当てて\n",low,high,kaisuu);

	do {
		printf("%d回目 >",cnt + 1);
		scanf("%d",&no);
	
		log[cnt] = no;
	
		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
		cnt++;
	} while( no != ans && cnt < kaisuu);

	if( no == ans)
		printf("%d回で正解\n",cnt);
	else 
		printf("残念\n");

 	printf("結果\n");
	int i;
	for( i=0; i<cnt; i++) {
		if(log[i] - ans == 0)
			printf("%2d回目 %4d  %4d\n",i,log[i],log[i] - ans);
		else
			printf("%2d回目 %4d  %+4d\n",i,log[i],log[i] - ans);
	}

	return 0;
}	
	
