#include <stdio.h>
#include <time.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 0;
	} while( 1000 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 1;
}

int main(void)
{
	int i;

	printf("10");
	fflush(stdout);

	for(i=9; i > 0; i--) {
		sleep(1000);
		printf("\b\b%2d",i);
		fflush(stdout);
	}

	sleep(1000);
	printf("\a\b\bFIRE!!\n");
	sleep(1000);

	return 0;
}	


