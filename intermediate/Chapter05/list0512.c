#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	int *x;

	x = calloc( 1, sizeof(int));

	if( x == NULL)
		printf("領域確保に失敗しました。");
	else {
/*		*x = 57;  */
		printf("*x = %d\n", *x);
		free(x);
	}

	return 0;
}
