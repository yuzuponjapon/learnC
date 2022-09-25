#include <stdio.h>


int main(void)
{
	int prime[500];
	unsigned int counter = 0;
	int ptr = 0;
	int n;
	int i;

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for(n = 5; n <= 1000; n += 2) {
		int flag = 0;
		for(i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if(n % prime[i] == 0) {
				flag = 1;
				break;
			}
		}
		if(!flag)
			prime[ptr++] = n;
	}

	for(i = 0; i < ptr; i++) {
		printf("%d\n", prime[i]);
	}
	printf("演算回数 = %d\n", counter);

	return 0;
}
