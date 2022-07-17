#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX_STAGE 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20



int sleep( unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if((c2 = clock()) == (clock_t)-1)
			return 0;
	} while( 1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	
	return 1;
}


int main(void)
{

	
