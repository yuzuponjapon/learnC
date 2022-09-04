#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


#define MAX_STAGE 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20


int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if((c2 = clock()) == (clock_t)-1)
			return 0;
	} while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}



int main(void)
{
	int i, stage;
	int success = 0;
	int level;
	clock_t start, end;

	srand(time(NULL));
	
/* level 入力 */
	do {
		printf("level %d～%d >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d",&level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);

	start = clock();

/* MAX_STAGE回ループ */
	for( stage = 0; stage < MAX_STAGE; stage++ ) {
			
	/* 問題作成 */
		char no[ LEVEL_MAX + 1];
		char x[ LEVEL_MAX * 2];
		
		no[0] = rand() % 9 + '1';
		for( i = 1; i < level; i++)
			no[i] = rand() % 10 + '0';
		no[LEVEL_MAX] = '\0';
		
	/* 問題表示 */
		printf(" %s",no);
		fflush(stdout);
		sleep(1000);
		
	/* 解答入力 */
		printf("\r %*s\rinput >",level, "");
		scanf("%s",&x);

	/* 合否判定、表示、記録 */
		if(strcmp( no, x) == 0) {
			printf("正解です\n");
			success++;
		}
		else
			printf("はずれ\n");
	}
	
	end = clock();

/* 結果表示 */
	printf("%d問中%d問正解です。\n", MAX_STAGE, success);
	printf("時間は%.1fです。\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
	






















 

