#include <stdio.h>
#include <time.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if((c2 = clock()) == (clock_t) -1)
			return 0;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}

int main(void)
{
	printf("*");
	fflush(stdout);

	int i;
	for(i=0; i < 30; i++) {
		sleep(100);
		printf("\b\b *>");
		fflush(stdout);
	}
	for(i=0;i < 30; i++) {
		sleep(100);
		printf("\b\b  \b\b\b<*");
		fflush(stdout);
	}
	
	putchar('\n');

	return 0;
}	
