#include <stdio.h>
#include <time.h>


int main(void)
{
	clock_t c1 = clock(), c2;
	unsigned long x = 1000;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( ( c2 - c1) / CLOCKS_PER_SEC < 5);

	printf("c1 = %f",(double)c1);

	printf("  c2 = %f\n",(double)c2);
	
	return 0;
}
