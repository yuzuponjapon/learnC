#include <stdio.h>

int main(void)
{
	char a[][5] = {"lisp","c","ada"};
	char *p[] = {"paul","x","mac"};
	int i;

	for(i = 0;i < 3;i++) {
		printf("a[%d] = \"%s\"\n",i,a[i]);
	}

	for(i = 0;i < 3;i++) {
		printf("p[%d] = \"%s\"\n",i,p[i]);
	}

	return 0;
}
