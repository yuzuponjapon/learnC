#include <stdio.h>

void spira( int n )
{
	int i, j;

	for(i = 1; i <= n; i++) {
		printf("%*s", n - i, "");
		for(j = 0; j < i * 2 -1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
} 

int main(void)
{

	int n;
	
	printf("input >");
	scanf("%d", &n);

	spira( n );

	return 0;
}
