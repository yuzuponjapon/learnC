#include <stdio.h>

int main(void)
{
	int min, max;
	int no1, no2;
	int i;
	int sum = 0;

	printf("input no1 >");
	scanf("%d", &no1);
	printf("input no2 >");
	scanf("%d", &no2);

	if(no1 >= no2) {
		max = no1;
		min = no2;
	}
	else {
		max = no2;
		min = no1;
	}

	for( i = min; i <= max; i++)
		sum += i;

	printf("%d～%dの総和は%dです。\n", no1, no2, sum);

	return 0;
}
