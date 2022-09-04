#include <stdio.h>
#include <time.h>

#define STAGE_MAX 5
#define LEVEL_MIN 2
#define LEVEL_MAX 6


sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;
	
	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * (c2 - c) / CLOCKS_PER_SEC < x);

	return 0;
}


int main(void)
{

	int level;
	int ans[LEVEL_MAX];
	int x[LEVEL_MAX];
	int i,j;

	srand( time(NULL));


/* レベル入力 */
	do {
		printf("level >");
		scanf("%d", &level);
	} while(level < LEVEL_MIN || LEVEL_MAX < level);

	
/* STAGE_MAX 回ループ */
	for( i = 0; i < STAGE_MAX, i++) {
	/* レベル分問題作成 */
		for( j = 0; j < level; j++) {
			ans[j] = rand() % 90 + 10;
	/* 問題表示 */
			printf("%2d ", ans[j]);
		}
		fflush(stdout);
		sleep(1000);

		printf("\r%*s\r", level * 3, "");
	
	/* レベル分解答入力 */
		for(j = 0; j < level; j++) {
			printf("%d番目 >", j +  1);
			scanf("%d", x[j]);
		}

		
	/* 合否判定 */
	/* 結果表示 */
/* 総合結果表示 */





