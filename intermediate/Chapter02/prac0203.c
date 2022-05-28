#include <stdio.h>
#include <time.h>
#include <string.h>


int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	
	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while(1000 * (c2-c1) / CLOCKS_PER_SEC < x);

	return 0;
}

void bput(const char *s, int d, int e, int n)
{
	int i;
	int len = strlen(s);

	for(i=0;i<n;i++) {
		printf("\r%s",s);
		fflush(stdout);
		sleep(d);

		printf("\r%*s",len," ");

/*		printf("\r                    ");  */
		fflush(stdout);
		sleep(e);
	}

	putchar('\n');

}


int main(void)
{

	char str[20] = "Katsumi Hattori";

	bput(str,2000,200,5);

	return 0;

}
