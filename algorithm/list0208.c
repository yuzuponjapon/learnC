#include <stdio.h>



int cardinal_conv( unsigned fno, int fcn, char frno[])
{
	int fdigits = 0;
	char tbl[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	if(fno == 0)
		frno[fdigits++] = tbl[0];
	while(fno) {
		frno[fdigits++] = tbl[fno % fcn];
		fno /= fcn;
	}
	int i;
	for(i = 0; i < fdigits / 2; i++) {
		char tmp = frno[i];
		frno[i] = frno[fdigits -i -1];
		frno[fdigits -i -1] = tmp;
	}

	return fdigits;
}


int main(void)
{

	unsigned no;	/* 変換前 */	
	int cn;			/* カーディナルNO */
	char rno[512];	/* 変換後 */
	int digits;
	int retry;

	do {
		printf("非負整数 >");
		scanf("%d", &no);

		do {
			printf("基数(2～36) >");
			scanf("%d", &cn);
		} while( cn < 2 || 36 < cn);

		digits = cardinal_conv( no, cn, rno);

		printf("%dの%d進数は\n", no, cn);
		int i;
		for(i = 0; i < digits; i++) {
			printf("%c", rno[i]);
		}
		printf("です。\n");

		printf("retry? yes 1 no 0 >");
		scanf("%d", &retry);
	} while( retry == 1);

	return 0;
} 	
