#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap( int a[], int n)
{
	int i;

	for(i = 0; i < n / 2; i++) {
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}


int main(void)
{
	int no;
	int i;

	printf("no >");
	scanf("%d", &no);

	int *x = calloc( no, sizeof(int));

	srand( time( NULL));

	for(i = 0; i < no; i++) {
		x[i] = rand() % 100;
		printf("x[%d] = %d\n", i, x[i]);
	}

	swap( x, no);	

	printf("変換後\n");

	for(i = 0; i < no; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	

	free(x);

	return 0;
}
