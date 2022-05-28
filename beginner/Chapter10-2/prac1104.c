#include <stdio.h>

void puts_str(const char *s)
{
	printf("%s\n",s);
}

int main(void)
{
/*	char *str; */
	char str[20];
	printf("input >");
	scanf("%s",str);
	puts_str(str);

	return 0;
}		
	
