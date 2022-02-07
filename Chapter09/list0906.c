#include <stdio.h>

int main(void)
{
	int i;
	char str[][6] = {"Turbo","NA","DOHC"};

	for (i = 0;i < 3;i++) {
		printf("str[%d] = \"%s\"\n",i,str[i]);
	}

	return 0;
}
