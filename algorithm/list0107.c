#include <stdio.h>

int main(void)
{

	int sum = 0;
	int i = 1;
	int n;
	
	printf("input >");
	scanf("%d", &n);

	while( i <= n) {
		sum += i;
		i++;
	}
	
	printf("%dまでの総和 = %d\n", n, sum);
	
	return 0;
}
