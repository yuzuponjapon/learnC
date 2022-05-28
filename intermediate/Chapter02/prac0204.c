#include <stdio.h>
#include <time.h>
#include <string.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if((c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000 * (c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
}


void telop(const char *s, int dire, int speed, int n)
{
	int i,j;
	int cnt = 0;
	int len = strlen(s);

	for(i=0;i<n;i++) {
		putchar('\r');
		for(j=0;j<len;j++) {
			if((cnt + j) < len)
				printf("%c",*(s+cnt+j));
			else
				printf("%c",*(s+cnt+j-len));
		}
		fflush(stdout);
		sleep(speed);
        
		if(dire == 0) {      /* 左シフト */
			if(cnt < len)
				cnt++;
			else
				cnt = 0;  	
		}
		else {               /* 右シフト */
			if(cnt == 0)
				cnt = len;
			else 
				cnt--;
		}
	}
	putchar('\n');

}


int main(void)
{

	char str[20] = "KatsumiHattori";
	int dire, speed, n;
/*
	printf("文字列　＞");
	scanf("%s",str);
*/

	printf("方向　0:左　1:右　＞");
	scanf("%d",&dire);

	printf("速度　＞");
	scanf("%d",&speed);

	printf("回数　＞");
	scanf("%d",&n);

	telop(str,dire,speed,n);

	return 0;
}
