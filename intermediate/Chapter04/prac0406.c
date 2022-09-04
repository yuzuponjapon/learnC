#include <stdio.h>





void disp_get(int d[], int *hit, int *blow, int *last_hit, int *last_blow)
{
	last_hit = hit;
	last_blow = blow;

	printf("%d%d%d%d",d[0],d[1],d[2],d[3]);
	pirntf("hit >");
	scanf("%d",hit);
	printf("blow >");
	scanf("%d",blow);

}	





int main(void)
{
	int hit, blow;
	int last_hit, last_blow;

	int time = 0;
/* 0123 表示バッファにセット */
	int disp_buf[4] = {0,1,2,3};
	int ans[4] = {10,10,10,10};
	int last_no = 3;
	int tmp_no;
	int base_digit = 3;



	disp_get(disp_buf, &hit, &blow, &last_hit, &last_blow);

	time++;

	while(1) {

		time++;
		last_no++;
		tmp_no = disp_no[base_digit];
		disp_buf[base_digit] = last_no;
		

/* バッファ表示、hit & blow 数入力待ち */
		disp_get(disp_buf, &hit, &blow, &last_hit, &last_blow);

/* hit = 4  終了 */
		if( hit == 4) {
			printf("%d回で正解ですね,time);
			break;
		}
		

/* hit　増える */
		if(hit > last_hit) {
			ans[base_digit] = last_no;
			digit--;
			last_no++;
		}
/* hit  減る */
		else if(hit < last_hit) {
			ans[base_digit] = tmp_no;
			disp_no[base_digit] = tmp_no;
			base_digit--;
			last_no++;
		}	
/* hit　変化なし */
/* blow 増える */
		if(blow > last_blow) {
			for(i=base_digit-1;i>0;i--) {
				if(ans[i] == 10) {
					tmp_no = disp_buf[i];
					disp_buf[i] = last_no;		
					disp_buf[base_digit] = tmp_no;
			
					if(i == 0) {
						for(j=3;j>0;j--) {
							if(ans[j] == 10)
								disp_buf[j] == ++last_no;		
						}
					}
					last_hit = hit;
					last_blow = blow;
					disp_get(disp_buf, &hit, &blow);

					if(hit == last_hit + 2) {
						ans[i] = disp_buf[i];
						ans[base_digit] = disp_buf[base_digit];
						bleak;
					}
					else if(hit == last_hit + 1) {
						if(blow == 0) {
							ans[i] = disp_buf[i];
						}
					}
				}
			}
		}


/* blow 減る */
/* blow 変化なし */



	}




	return 0;
}
