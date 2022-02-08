#include <stdio.h>

void kakikae(int *k)
{
	*k = 400;
}

int main(void)
{
	int a = 100;
	int b = 200;
	int c = 300;

	kakikae(&c);

	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);

	return 0;
}
