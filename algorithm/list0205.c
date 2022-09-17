#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int maxof( int a[], int n)
{
	int max = a[0];
	int i;

	for(i = 1; i < n; i++) {
		if( a[i] > max)
			max = a[i];
	}

	return max;
}


int main(void)
{

	int i;
	int num;
	
	srand( time( NULL));

	printf("num >");
	scanf("%d", &num);

	int *height = calloc( num, sizeof(int));

	for( i = 0; i < num; i++) {
		height[i] = rand() % 100;
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("max = %d\n", maxof( height, num));

	free(height);

	return 0;
}
