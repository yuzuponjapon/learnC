#include <stdio.h>

int main(void)
{
	char *p = "abcde";
	printf("p = %s  アドレス = %p\n",p,p);
	p = p + 1;
	printf("p = %s  アドレス = %p\n",p,p);
	return 0;
}
