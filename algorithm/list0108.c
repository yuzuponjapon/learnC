#include <stdio.h>


int main(void)
{
	int n;
	int sum = 0;
	int i;

	printf("input >");
	scanf("%d",&n);
	
	for( i=1; i <= n; i++)
		sum += i;
	
	printf("%dまでの総和は%dです。\n", n, sum);

	return 0;
}
