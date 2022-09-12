#include <stdio.h>

void nrpira( int n )
{
	int i, j;

	for(i = 1; i <= n; i++) {
		printf("%*s", i - 1, "");
		for(j = 0; j < ( n - i + 1) * 2 - 1; j++) {
			printf("%d", i % 10);	
		}
		putchar('\n');
	}
}

int main(void)
{
	int n;

	printf("input >");
	scanf("%d", &n);

	nrpira( n );

	return 0;
}
