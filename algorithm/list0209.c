#include <stdio.h>

int main(void)
{

	unsigned long counter = 0;
	int i;
	int n;

	for( n = 2; n <= 1000; n++) {
		for( i = 2; i < n; i++) {
			counter++;
			if( n % i == 0)
				break;
		}
		if( n == i)
			printf("%d\n", n);
	}
	printf("counter = %d\n", counter);

	return 0;
}
