#include <stdio.h>
#include <string.h>
#include <time.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(),c2;
	
	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
} 


int main(void)
{

	char name[] = "katsumi ";
	int name_len = strlen(name);
printf("name_len = %d\n",name_len);
	int cnt = 0;
	int i;
	while(1) {
		putchar ('\r');
		for( i=0; i<name_len; i++) {
			if( cnt + i < name_len)
				putchar(name[cnt + i]);
			else
				putchar(name[cnt + i - name_len]);
		}
		fflush(stdout);
		sleep(500);

		if( cnt > 0)
			cnt--;
		else
			cnt = name_len - 1;
	}

	return 0;
}	
