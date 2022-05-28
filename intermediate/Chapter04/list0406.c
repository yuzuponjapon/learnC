#include <stdio.h>
#include <time.h>
#include <string.h>








void opening()
{
	puts("■　マスターマインドをしましょう。");
	puts("■　四つの数字の並びを当てて下さい。");
	puts("■　同じ数字が複数含まれることはありません。");
	puts("■　連続して入力してください。");
	puts("■　スペース文字等を入力しないでください。");
}


void make_ans( int ans[])
{
	int i,j;
	int tmp;

	srand(time(NULL));

	for(i = 0; i < 4; i++) {
		do {
			tmp = rand() % 10;
		
			for(j = 0; j < i; j++) {
				if( ans[j] == tmp)
					break;
			}
		} while(j < i);
		
		ans[i] = tmp;
	}
}


int human_ans( char h_ans[])
{
	int i;
	char buf[20];

	printf("数字を入力してください。＞");
	scanf("%s",buf);	

	if( strlen( buf) != 4)
		return 1;

	for(i = 0; i < 4; i++) {
		if(!isdigit(buf[i]))
			return 2;
		
		for(j = 0; j < i; j++) {
			if(buf[i] == buf[j]
				return 3;
			else
				h_ans[i] = buf[i];
		}
	}
}

void disp_err(int flag)
{
	switch( flag) {
		case 1:	printf("四ケタで\n");	break;
		case 2:	printf("数字のみで\n");	break;
		case 3:	printf("重複しないで\n");	break;
	}
}

void judge(int c_ans[], char h_ans[], int *blow, int *hit)
{
	int i,j;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(c_ans[i] + '0' == h_ans[j])
				if(i == j)
					(*hit)++;
				else
					(*blow)++;
		}
	}
}
			




int main(void)
{

	int check_flag;
	int judge_flag;
	int comp_ans[4];
	char human_ans[4];
	int blow,hit;

	opening();	/* オープニング */

	make_ans( comp_ans);	/* 解答作成 */

	do {
	
		do {
		
			check_flag = human_ans( human_ans);	/* 解答入力 入力値妥当チェック */
			
			disp_err(check_flag);		/* 入力値エラー表示 */
        
		} while(check_flag != 0);

		judge(comp_ans,human_ans,&blow,&hit);	/* 正解判定 */

	} while(judge_flag != 0);

	result();	/* 結果表示 */


	return 0;

