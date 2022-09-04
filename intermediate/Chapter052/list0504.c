#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define STAGE_MAX 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20



int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;
	
	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
}



int main(void)
{

	int stage;
	int level;
	clock_t start, end;
	int success = 0;
	const char list[] = "abcdefghijklmnopqrstuvwxyz"
						"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char no[LEVEL_MAX + 1];
	char x[LEVEL_MAX * 2];


	/* 初期処理 */
	srand(time(NULL));
	start = clock();

	do {
		printf("level [%d～%d] >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);


	/* STAGE_MAX回ループ */
	for(stage = 0; stage < STAGE_MAX; stage++) {
		
		/* 問題作成 level桁 */
		int i;
		for(i = 0; i < level; i++) {
			no[i] = list[rand() % strlen(list)];
		}
		no[level] = '\0';
		
		/* 問題表示 */
		printf("%s",no);
		fflush(stdout);
		sleep(1000);

		/* 解答入力 */
		printf("\r%*s\rinput > ", level, "");
		scanf("%s",&x);

		/* 合否判定、表示、記録 */
		if( strcmp( no, x) == 0) {
			printf("正解\n");
			success++;
		}
		else
			printf("はずれ\n");
	}

	end = clock();

	/* 結果表示 */
	printf("%d問中%d問正解。\n", STAGE_MAX, success);
	printf("時間は%.1f秒です。\n", (double)( end - start) / CLOCKS_PER_SEC); 

	return 0;
}
