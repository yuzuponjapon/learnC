#include <stdio.h>
#include <time.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;

	do {
		if(( c2 = clock()) == (clock_t)-1)
			return 1;
	} while( 1000 * ( c2 - c1) / CLOCKS_PER_SEC < x);

	return 0;
}


int main(void)
{
	int i;
	clock_t c;
	
	for(i=10;i>0;i--) {
		printf("\r%2d",i);
		fflush(stdout);
		sleep(500);
	}

	int k;
	for(i=0;i<100000000;i++) {
		k = k*k;
	}	

	printf("\r\aFIRE!!\n");
	c = clock();
	printf("経過時間%.1f   クロック数%f\n",(double)c/CLOCKS_PER_SEC,(double)c);

	return 0;
}
											
