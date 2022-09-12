#include <stdio.h>

int main(void)
{

	int n;
	int sum = 0;
	int i;

	printf("input >");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		sum += i;
		if(i == 1)
			printf(" 1");
		else
			printf(" + %d", i);
	}
	printf(" = %d\n", sum);

	return 0;
}
