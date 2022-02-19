#include <stdio.h>

int str_ch(const char *s,int c)
{
	int i;
	int cnt = 0;
	for(i=0;i<c;i++) {
		if(*(s+i) == 'c')
			cnt++;
	}
	
	return cnt;
}

int main(void)
{
	char *str = "abcdslakjckcsacefgc";
	printf("%d\n",str_ch(str,30));
	return 0;
}
	
