#include <stdio.h>
#include <limits.h>


int main(void)
{
	unsigned no;
	char rno[256];
	int cd;
	int retry;
	int i;
	char table[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	do {
		int digit = 0;

		do {
			printf("非負整数 >");
			scanf("%d", &no);
printf("%u\n", UINT_MAX);
		} while( UINT_MAX < no);
		
		do {
			printf("基数 >");
			scanf("%d", &cd);
		} while( cd < 2 || 36 < cd );

		if( no == 0)
			rno[digit++] = table[0];
		else {
			while(no) {
				rno[digit++] = table[no % cd];
				printf("%2d  |%10d    … %c\n", cd, no, table[no % cd]);
				printf("    -------------\n");
				no /= cd;
			}
			printf("              0\n");
			
			for(i = 0; i < digit / 2; i++) {
				char tmp = rno[i];
				rno[i] = rno[digit -i -1];
				rno[digit -i -1] = tmp;
			}
			
			printf("%d進数で", cd);
			for(i = 0; i < digit; i++) {
				printf("%c", rno[i]);
			}
			printf("です。\n");
		}
		printf("retry? yes 1 no 0 >");
		scanf("%d", &retry);

	} while(retry == 1);

	return 0;
}
