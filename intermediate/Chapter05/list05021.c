#include <stdio.h>
#include <string.h>
#include <time.h>


#define MAX_STAGE 3
#define LEVEL_MAX 20 
#define LEVEL_MIN 2



int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while((c2 - c1) / CLOCK_PER_SEC * 1000.0 < x);

	return 0;
}





int main(void)
{
	clock_t start, end;
	int level;
	int stage;

	srand( time(NULL));


/* オープニング */
	printf("記憶力トレーニング開始！\n");
/* level入力 */
	do {
		printf("level [ %d ～ %d] >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d",&level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);

	start = clock();
/* MAX_STAGE回ループ */
	for(stage = 0; i < MAX_STAGE; stage++) {
		ans
	/* level桁答え作成 */
		char ans[LEVEL_MAX + 1];
		char x[LEVLE_MAX * 2];
		for(i = 0; i < level; i++) {
			ans[i] = rand() % 10;
		}
		ans[i] = '\0';

	/* 問題表示 */

	/* 答え表示 */
	/* 解答入力 */
		
	/* 合否判定 */
	/* 小計表示、記録 */
/* 合計表示 */





	return 0;
}
