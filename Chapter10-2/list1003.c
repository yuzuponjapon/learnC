#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;

	int *p_a = &a;
	int *p_b = &b;
	int *p_c = &c;
	

	printf("a    = %d\n",a);
	printf("&a   = %p\n",&a);
	printf("p_a  = %p\n",p_a);  
	printf("&p_a = %p\n",&p_a);
	printf("*p_a = %d\n",*p_a);  
	
	*p_a = 2;
	printf("a  = %d\n",a);

	p_a = &c;
	printf("*p_a = %d\n",*p_a);	

	return 0;
}
