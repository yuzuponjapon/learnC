#include <stdio.h>

int wasa(int a, int b, int *wa, int *sa)
{
	*wa = a + b;
	*sa = a - b;
}







int main(void)
{

	int a = 5;
	int b = 3;

	int wa = 1;
	int sa = 1;

	wasa(a,b,&wa,&sa);

	printf("a = %d  b = %d  wa = %d  sa = %d\n",a,b,wa,sa);

	return 0;
}
