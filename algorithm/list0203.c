#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x = calloc( 1, sizeof(int));

	if( x == NULL)
		puts("error");
	else {
		*x = 54;
		printf("*x = %d\n", *x);
		free(x);
	}

	return 0;
}
