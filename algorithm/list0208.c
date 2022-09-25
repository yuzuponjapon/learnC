#include <stdio.h>


int cardinal_conv( int fno, int fcd, char frno[])
{
	int fdigit = 0;
	char table[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if( fno == 0)
		frno[fdigit++] = table[0];
	else {
		int i;
		while( fno ) {
			frno[fdigit++] = table[fno % fcd];
			fno /= fcd;
		}
		
		for(i = 0; i < fdigit / 2; i++) {
			char tmp = frno[i];
			frno[i] = frno[fdigit -i -1];
			frno[fdigit -i -1] = tmp;
		}
	}

	return fdigit;
}


int main(void)
{
	int cd;
	int no;
	char rno[256];
	int digit;
	int retry;

	do {
		printf("非負整数 >");
		scanf("%d", &no);

		do {
			printf("基数 >");
			scanf("%d", &cd);
		} while( cd < 2 || 36 < cd );

		digit = cardinal_conv( no, cd, rno);	

		printf("%dの%d進数は\n", no, cd);
		int i;
		for(i = 0; i < digit; i++) {
			printf("%c", rno[i]);
		}
		printf("です。\n");
	
		printf("retry? Yes 1 No 0 >");
		scanf("%d", &retry);
	} while( retry == 1);

	return 0;
}
