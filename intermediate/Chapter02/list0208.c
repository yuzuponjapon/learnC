#include <stdio.h>
#include <time.h>
#include <string.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 0;
	} while( 1000.0 * ( c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}


int main(void)
{

	int i;
	char name[] = "Katsumi Hattori";
	int name_len = strlen(name);

	while (1) {
		for( i=0; i < name_len; i++) {
			putchar( name[i] );
			fflush( stdout);
			sleep( 100);
		}
		for( i=0; i < name_len; i++) {
			printf("\b \b");
			fflush(stdout);
			sleep(50);
		}
	}

	return 0;
}
	
