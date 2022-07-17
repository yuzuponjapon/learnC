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
		if(( c2 = clock()) == ( clock_t) -1)
			return 0;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}


int main(void)
{
	int level;
	int success = 0;
	int stage, i;
	clock_t start, end;
	const char ltr[] = "abcdefghijklmnopqrstuvwxyz";

	srand( time(NULL));	
	

	printf("記憶力トレーニング開始\n");

	do {
		printf("level (%d～%d) > ", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while( level < LEVEL_MIN || LEVEL_MAX < level);
	

	start = clock();

	for(stage = 0; stage < MAX_STAGE; stage++) {
		char no[LEVEL_MAX + 1];
		char x[LEVEL_MAX * 2];

		for(i = 0; i < level; i++) {
			no[i] = ltr[ rand() % strlen(ltr)];
		}
		no[level] = '\0';
	
		printf("%s",no);
		fflush(stdout);
		sleep(200 * level);

		printf("\r%*s\r入力 >", level, "");
		fflush(stdout);
		scanf("%s", x);
		
		if( strcmp( x, no) != 0)
			printf("\a間違い\n");
		else {
			printf("正解\n");
			success++;
		}
	}

	end = clock();

	printf("%d回中%d回正解です。\n", MAX_STAGE, success);
	printf("%.1f秒でした。\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
