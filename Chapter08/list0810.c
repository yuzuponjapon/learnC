#include <stdio.h>
#define NMB 26  /* アルファベット用　*/
/* #difine NMB 10  数字用 */

int main(void)
{
	int i,ch;
	int cnt[NMB] = {0};

	while( ( ch = getchar() ) != EOF ) {
		if(ch >= 'a' && ch <= 'z')
			cnt[ch - 'a']++;
	}

	puts("出現回数");

	for(i = 0;i < NMB;i++) {
		printf("%d : %d回\n",'a' + i,cnt[i]);
	}

	return 0;
}	
