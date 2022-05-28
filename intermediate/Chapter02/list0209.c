#include <stdio.h>
#include <time.h>
#include <string.h>


int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	
	do {
		if((c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x );

	return 0;
}

int main(void)
{
	char name[] = "KatsumiHattori";
	int str_len = strlen(name);
	int i;
	int cnt = 0;

	while(1) {
		putchar('\r');
		for(i=0; i<str_len; i++) {
			if(cnt+i < str_len)
				putchar(name[cnt+i]);
			else
				putchar(name[cnt+i-str_len]);
		}
		fflush(stdout);
		sleep(500);

		if(cnt < str_len - 1)
			cnt++;
		else
			cnt = 0;
	}

	return 0;
}
		
