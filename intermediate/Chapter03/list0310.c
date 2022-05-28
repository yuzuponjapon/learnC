#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win, lose, draw;
char *hd[] = {"グー","チョキ","パー"};
int human,comp;


void initialize(void)
{
	win = 0;
	lose = 0;
	draw = 0;
	
	srand( time(NULL));

	printf("じゃんけん　スタート！\n");	
}

void jyanken(void)
{
	comp = rand() % 3;

	printf("じゃんけんポン  ");
	int i;
	for( i=0; i<3; i++) {
		printf("%d:%s  ", i, hd[i]);	
	}
	scanf("%d",&human);	

}

void count_no(int result)
{
	switch ( result) {
		case 0:	draw++;		break;
		case 1: lose++;		break;
		case 2: win++;		break;
	}
}

void disp_result( int result)
{
	switch( result) {
		case 0: printf("ひきわけです。\n");		break;
		case 1:	printf("あなたの負けです。\n");	break;
		case 2: printf("あなたの勝ちです。\n");	break;
	}
	printf("現在　%d勝 %d敗 %d引分けです。\n", win, lose, draw);
}




int main(void)
{
	int judge;

	
/* 初期設定 */
	initialize();

	do {
		/* じゃんけん実行 */
		jyanken();

		/* 勝ち負け判定 */
		judge = ( human - comp + 3) % 3;

		/* 判定結果回数更新 */
		count_no(judge);

		/* 結果表示 */
		disp_result(judge);

	/* 継続判定 */
	} while( win < 3 && lose < 3);

	/* 最終結果表示 */
	printf("結果は、%d勝 %d敗 %d引分けでした。\n", win, lose, draw);

	return 0;
}
