#include <stdio.h>
#include <time.h>
#include <string.h>



void opening()
{
	printf("マスターマインドをしましょう。\n");
}


void make_ans(int ans[])
{
	int tmp;
	int i,j;

	srand(time(NULL));

	for(i = 0; i < 4; i++) {
		do {

			tmp = rand() % 10;
		
			for(j = 0; j < i; j++) {
				if(tmp == ans[j])
					break;
			}

		} while( j < i);
		
		ans[i] = tmp;
	}
}		

int input_ans(char ans[])
{
	int i,j;
	char buf[10];

	printf("input >");
	scanf("%s",buf);

	if(strlen(buf) !=4)
		return 1;
	for(i = 0; i < 4; i++) {
		if(!isdigit(buf[i]))
			return 2;
		for(j = 0; j < i; j++) {
			if(buf[i] == buf[j])
				return 3;
		}
		ans[i] = buf[i];
	}
	return 0;
}
		
void disp_err(int e_flag)
{
	switch(e_flag) {
		case 1:	printf("四ケタで");		break;
		case 2:	printf("数字で");		break;
		case 3:	printf("重複しないで");	break;	
	}
	printf("入力して\n");
}

void judge(const int c_ans[], const char h_ans[], int *hit, int *blow)
{
	int i,j;

	*hit = *blow = 0;
/*
int k;
printf("judge c_ans = ");
for(k=0;k<4;k++) {
	printf("%d",c_ans[k]);
}
printf("   h_ans = %s\n",h_ans);
*/

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(c_ans[i] + '0' == h_ans[j]) {
				if(i == j)
					(*hit)++;
				else
					(*blow)++;
			}
		}
	}	
/*
printf("judge  hit = %d  blow = %d\n",*hit,*blow);
*/
}









int main(void)
{

	int comp_ans[4];
	char human_ans[4];
	int hit = 0;
	int blow = 0;
	int err_flag;
	int cnt = 0;

	/* オープニング */
	opening();

	/* 解答作成 */
	make_ans(comp_ans);
/*
int i;
for(i=0;i<4;i++) {
	printf("%d",comp_ans[i]);
}
*/

	do {
		/* 入力、値確認 */
		err_flag = input_ans(human_ans);

		if(err_flag != 0)
			/* 入力エラー表示 */
			disp_err(err_flag);
		else {	
			/* 正解判定 */
			judge(comp_ans, human_ans, &hit, &blow);
			printf("hit = %d  blow = %d\n",hit,blow);
		}
		cnt++;
	} while(hit < 4);

	
	/* 結果表示 */
	printf("%d回で正解です\n",cnt);

	return 0;
}
