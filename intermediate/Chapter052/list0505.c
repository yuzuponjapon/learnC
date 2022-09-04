#include <stdio.h>
#include <time.h>
#include <stdlib.h>



#define MAX_STAGE 3
#define LEVEL_MAX 6
#define LEVEL_MIN 3

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if((c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
}


int main(void)
{
	int stage;
	int level;
	int score[MAX_STAGE];
	int success = 0;
	clock_t start, end;





	/* 初期処理 */
	srand(time(NULL));
	start = clock();	
	
	/* level入力 */
	do {
		printf("level [%d～%d] >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);

	/* MAX_STAGE回ループ */
	for(stage = 0; stage < MAX_STAGE; stage++) {
	
		/* 問題作成,表示 */
		int i;
		int no[LEVEL_MAX];
		int x[LEVEL_MAX];
		int seikai = 0;

		for(i = 0; i < level; i++) {
			no[i] = rand() % 90 + 10;
			printf("%d ", no[i]);
		}
		fflush(stdout);
		sleep(1000);
		printf("\r%*s\r", 3 * level, "");
		fflush(stdout);
			
		/* 解答入力 */
		for(i = 0; i < level; i++) {
			printf("%d番目 >",i + 1);
			scanf("%d",&x[i]);
		}

		/* 合否判定,表示、記録 */
		for(i = 0; i < level; i++) { 
			if(x[i] == no[i] + 1) { 
				printf("〇 "); 
				seikai++;
			}
			else
				printf("× ");
		}
		putchar('\n');			
		
		/* 正解表示 */
		for(i = 0; i < level; i++) {
			printf("%d ", no[i] + 1);
		}
		putchar('\n');
		
		/* 入力値表示 */
		for(i = 0; i < level; i++) {
			printf("%d ", x[i]);
		}
		putchar('\n');
sleep(1000);

		/* 正解数記録 */
		score[stage] = seikai;
		success += seikai;
		
	}

	end = clock();


	/* 結果表示 */
	printf("%d問中%d問正解しました。\n", level * MAX_STAGE, success);
	for( stage = 0; stage < MAX_STAGE; stage++)
		printf("第%dステージ：%d問正解\n", stage + 1, score[stage]);

	printf("%.1f秒でした。\n", (double)( end - start) / CLOCKS_PER_SEC);


	return 0;
}
