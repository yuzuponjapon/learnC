#include <stdio.h>


int main(void)
{
	int n;
	int sum = 0;
	int i;

	do {
		printf("input >");
		scanf("%d", &n);
	} while( n <= 0);

	for( i = 1; i <= n; i++)
		sum += i;

	printf("1～%dまでの総和は%dです。\n", n, sum);

	return 0;
}
