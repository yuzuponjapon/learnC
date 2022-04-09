#include <stdio.h>
#include <time.h>

int main(void)
{
	int log[20] = {0};
	int ans;
	int no;
	int cnt = 0;

	srand(time(NULL));
	ans = rand() % 1000;

	printf("0～999 >");

	do {
		printf("いくつ？ >");
		scanf("%d",&no);
	
		if( no > ans) 
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
		log[cnt] = no;
		cnt++;
	} while( no != ans && cnt < 10);

	if( no == ans)
		printf("正解\n");
	else 
		printf("残念\n");

	printf("結果 入力値　誤差\n");

	int i;
	for( i=0; i < cnt; i++) {
		if( log[i] - ans == 0)
			printf("%2d回目 %4d %4d\n",i+1,log[i],log[i]-ans);
		else		
			printf("%2d回目 %4d %+4d\n",i+1,log[i],log[i]-ans);
	}

	return 0;
}
