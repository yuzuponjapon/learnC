#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LEVEL_MIN 2
#define LEVEL_MAX 6
#define STAGE_MAX 3 


int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 0;
	} while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}


int main(void)
{
	int level;
	int stage;
	int i;
	int success = 0;
	int score[STAGE_MAX];
	int total = 0;
	clock_t start, end;

	srand( time(NULL));


/* タイトル表示 */
	printf("プラスワントレーニング開始！！\n");
	printf("2桁の数字を記憶します。\n");
	printf("１を加えた値をにゅうりょくしてください。\n");
/* レベル設定 */
	do {
		printf("挑戦するレベル (%d～%d) >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);


	start = clock();

/* start 10回ループ*/
	for( stage = 0; stage < STAGE_MAX; stage++) {
		int no[ LEVEL_MAX ];
		int x[ LEVEL_MAX ]; 
		int seikai = 0;
	/* 問題作成 */
		for(i = 0; i < level; i++) {
			no[i] = rand() % 90 + 10;
		}

	/* 問題表示 */
		printf("\n第%dステージ開始！\n", stage + 1);
		for(i = 0; i < level; i++) {
			printf("%d ", no[i]);
		}
		putchar('\n');
	
	/* レベル回解答入力 */
		for(i = 0; i < level; i++) {
			printf("%d番目の数 >", i + 1);
			scanf("%d", &x[i]);
		}

	/* 入力結果表示 */
		for(i = 0; i < level; i++)
			printf("%-3d", x[i]);
		putchar('\n');
	
    /* 〇×表示 */
		for(i = 0; i < level; i++) {
			if(no[i] + 1 == x[i]) { 
				printf("〇 ");
				seikai++;
			}
			else
				printf("× ");
		}
	/* 正解数表示 */
		printf(" ... %d問正解です。\n", seikai);
		score[stage] = seikai;
		success += seikai;
	}
	
	end = clock();

/* 全体結果発表 */
	printf("\n%d問中%d問正解しました。\n", stage * level, success);
/* ステージ別結果表示 */
	for( i = 0; i < STAGE_MAX; i++) {
		printf("第%dステージ：%d\n", i, score[i]);
	}

/* 所要時間表示 */
	printf("%.1f秒でした。\n", (double)(end - start) / CLOCKS_PER_SEC);
 
	return 0;
}
