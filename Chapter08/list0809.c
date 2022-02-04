#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt[10] = {0};
	int i,ch,nmb;
	while (( ch = getchar()) != EOF ) {
		switch ( ch ) {
				case '0' : cnt[0]++;break;
				case '1' : cnt[1]++;break;
				case '2' : cnt[2]++;break;
				case '3' : cnt[3]++;break;
				case '4' : cnt[4]++;break;
				case '5' : cnt[5]++;break;
				case '6' : cnt[6]++;break;
				case '7' : cnt[7]++;break;
				case '8' : cnt[8]++;break;
				case '9' : cnt[9]++;break;
		}
	}

/******  正常に動かない　ｃｈが文字のため？
	while (( ch = getchar()) != EOF ) {
		nmb = atoi(ch);
		cnt[nmb]++;
	}
*/

/*
	ch = 1;
	cnt[ch]++;
*/

	for (i = 0; i < 10; i++ )
		printf("'%d' : %d\n",i,cnt[i]);

	return 0;
}
