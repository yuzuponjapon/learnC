#include <stdio.h>
#include <time.h>
#include <string.h>




void opening()
{
	printf("start\n");
}

void make_ans(int c_ans[])
{
	int i,j;
	int tmp;

	srand(time(NULL));

	for(i = 0; i < 4; i++) {
		do {
			tmp = rand() % 10;
			for(j = 0; j < i; j++) {
				if(tmp == c_ans[j])
					break;
			}
		} while(j < i);
		c_ans[i] = tmp;
	}
}		
		
		






	
int input_check(char check_buf[])
{ 
	if(strlen(check_buf) != 4)
		return 1;
	for(i = 0; i < 4; i++) {
		if(!isdigit(check_buf[i]))
			return 2;
		for(j = 0; j < i; j++) {
			if( check_buf[i] == check_buf[j])
				return 3;
		}
	}
	return 0;
}
	
void input_ans(char h_ans[])
{
	char buf[10];
	int err_flag;

	do {
		printf("input >");
		scanf("%s",&buf);
/*入力値チェック*/
		err_flag = input_check(buf);

		switch( err_flag) {
			case 1:	printf("4桁で");	break;
			case 2:	printf("数字で");	break;
			case 3:	printf("重複");		break;
		}
	} while(err_flag != 0);

	for(i = 0; i < 4; i++) {
		h_ans[i] = buf[i];
	}
}	



void judge(int c_ans[], char h_ans[], int *hit, *blow)
{
	
	int i,j;
	*hit = *blow = 0;

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
	printf("hit = %d   blow = %d\n",*hit, *blow);

}








int main(void)
{
	int comp_ans[4];
	char human_ans[4];
	int hit,blow;

/*オープニング*/
	opening();
/*答作成*/
	make_ans(comp_ans);

	do {
/*解答入力,入力値チェック*/
		input_ans(human_ans);
/*正解判定*/
		judge(comp_ans, human_ans, &hit, &blow);
	} while(hit != 4);

/*判定結果表示*/
	print_result();


	return 0;
}
