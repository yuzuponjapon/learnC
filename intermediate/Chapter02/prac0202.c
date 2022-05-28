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


void gput(const char *s, int speed)
{
	clock_t c1 = clock(), c2;
	int i,len;

	len = strlen(s);

	for(i=0;i<len;i++) {
		printf("%c",*(s+i));
		fflush(stdout);
		sleep(speed);
	}	
}

int main(void)
{

	char str[20] = "Katsumi Hattori";	
	
	gput(str,500);
	putchar('\n');

	return 0;
}
