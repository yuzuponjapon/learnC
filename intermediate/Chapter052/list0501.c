#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_STAGE 10


int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
}


int main(void)
{

	int stage;
	clock_t start, end;
	int success = 0;

	srand(time(NULL));
	start = clock();	

/* MAX_STAGE回ループ */
	for(stage = 0; stage < MAX_STAGE; stage++) {
	/* 問題作成 */
		int x;
		int no = rand() % 9000 + 1000;

				
	/* 問題表示　＆　消去 */
		printf("%d",no);
		fflush(stdout);
		sleep(500);
	/* 解答入力 */
		printf("\rinput >");
		fflush(stdout);
		scanf("%d",&x);
				
	/* 合否判定 */	
		if( no == x) {
			printf("正解\n");
			success++;
		}
		else
			printf("はずれ\n");
	}
	end = clock();
			
/* 結果表示 */
	printf("%d中%d正解です\n",MAX_STAGE, success);
	printf("時間 %.1fでした\n", (double)(end - start) / CLOCKS_PER_SEC);



	return 0;
}
