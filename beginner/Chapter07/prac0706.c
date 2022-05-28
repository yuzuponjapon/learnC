#include <stdio.h>

int main(void)
{
	unsigned i;
	
	i = ~0U;

	i += 2;

	printf("%d\n",i);

	return 0;
}
