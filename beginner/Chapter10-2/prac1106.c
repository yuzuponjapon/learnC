#include <stdio.h>

char *str_chr(const char *s, int c)
{
	int i;
	for( i=0; i<c; i++) {
		if( *(s+i) == 'c') { 
			printf("%d列目\n",i+1);
			return (char *)s+i;
		}
		if( *(s+i) == 0)
			return 0;
	}
	return 0;
}

int main(void)
{
	char *str = "defgisgsc";
	char *p;


	p = str_chr(str,10);
	if( p == 0)
		printf("nasi\n");
	else
		printf("%c\n", *p);

	return 0;
}

