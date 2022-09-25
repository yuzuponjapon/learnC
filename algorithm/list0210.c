#include <stdio.h>

int main(void)
{
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;
	int i;
	int n;
	
	prime[ptr++] = 2;
	for(n = 3; n < 1000; n += 2) {
		for(i = 1; i < ptr; i++) {
			counter++;
			if( n % prime[i] == 0)
				break;
		}
		if( i == ptr) 
			prime[ptr++] = n;
	}

	for(i = 0; i < ptr; i++) {
		printf(" %d\n", prime[ i ]);
	}
	printf("counter = %d\n", counter);

	return 0;
}
