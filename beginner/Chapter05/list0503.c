#include <stdio.h>
int main(void)
{

	int v[5];
	int i;

	for ( i = 0; i < 5 ; i++ )
	{
		v[i] = i + 1;
		printf("%d\n",v[i]);
	}

	return 0;
}
