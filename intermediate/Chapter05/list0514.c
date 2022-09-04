#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int n;
	int *x;


	printf("要素数 >");
	scanf("%d",&n);

	x = calloc( n, sizeof(int));

	if(x == NULL)
		puts("error");
	else {
		int i;
		for(i = 0; i < n; i++)
			x[i] = i;
		for(i = 0; i < n; i++)
			printf("x[%d] = %d\n", i, x[i]);
		free(x);
	}
	
	return 0;
}
