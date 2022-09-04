#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int *x;

	x = calloc( 1, sizeof( int));

	printf("input >");
	scanf("%d", x);

	if( x == NULL)
		printf("error\n");
	else {
		printf("*x = %d\n", *x);
		free(x);
	}

	return 0;
}
