#include <stdio.h>
#include <limits.h>

int main(void)
{


	printf("char       : %d～%d\n",  CHAR_MIN  , CHAR_MAX);
	printf("signed char: %d～%d\n",  SCHAR_MIN  , SCHAR_MAX);
	printf("short      : %d～%d\n",  SHRT_MIN  , SHRT_MAX);
	printf("int        : %d～%d\n",  INT_MIN,INT_MAX);
	printf("long       : %ld～%ld\n", LONG_MIN,LONG_MAX);

	printf("\n");	
	printf("CHAR_BIT  : %d",CHAR_BIT);

	return 0;
}
