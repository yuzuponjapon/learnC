#include <stdio.h>



int main(void)
{

	int a,b,c;

	printf("a >");
	scanf("%d",&a);
	printf("b >");
	scanf("%d",&b);
	printf("c >");
	scanf("%d",&c);

	int max = a;

	if(b > max)
		max = b;
	if(c > max)
		max = c;
	
	printf("max = %d\n", max);

	return 0;
}

		
