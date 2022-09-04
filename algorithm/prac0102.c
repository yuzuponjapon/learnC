#include <stdio.h>

int min4( int a, int b, int c, int d)
{
	int min = a;
	
	if( min > b) min = b;
	if( min > c) min = c;
	if( min > d) min = d;

	return min;
}

int main(void)
{

	int a,b,c,d;

	printf("a >");	scanf("%d", &a);
	printf("b >");	scanf("%d", &b);
	printf("c >");	scanf("%d", &c);
	printf("d >");	scanf("%d", &d);

	printf("min = %d\n", min4(a,b,c,d));

	return 0;
}
