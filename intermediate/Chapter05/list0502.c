#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STAGE  10
#define LEVEL_MIN  3
#define LEVEL_MAX  20


int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if((c2 = clock()) == (clock_t)-1)
			return 0;
	} while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}


int main(void)
{
	int i;
	int level;	
	int stage;
	int success = 0;
	clock_t start,end;


	srand(time(NULL));



	do {
		printf("level (%d ～ %d) >", LEVEL_MIN, LEVEL_MAX);
		scanf("%d", &level);
	} while( !( LEVEL_MIN <= level && level <= LEVEL_MAX));

	start = clock();

	for(stage = 0; stage < MAX_STAGE; stage++) {
		char no[LEVEL_MAX + 1];
		char x[LEVEL_MAX * 2];
	
		no[0] = '1' + rand() % 9;
		for(i = 1; i < level; i++) 
			no[i] = '0' + rand() % 10;
		no[level] = '\0';

		printf("%s", no);
		fflush(stdout);
		sleep(125 * level);

		printf("\r%*s\r 入力せよ >", level, "");
		scanf("%s", x);
	
		if( strcmp( no, x ) != 0)
			printf("\a間違いです。\n");
		else {
			printf("正解です。\n");
			success++;
		}
	}
	end = clock();

	printf(" %d回中%d回正解です。\n", MAX_STAGE, success);
	printf(" %.1f秒でした。\n", (double)( end - start) / CLOCKS_PER_SEC);

	return 0;

} 












