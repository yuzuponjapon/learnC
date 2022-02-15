#include <stdio.h>

int main(void)
{
	int n;
	double x;
	int a[3];
	char *p = "abc";

	printf("n のアドレス：%p\n",&n);
	printf("n のサイズ :%d\n",sizeof(n));
	printf("x のアドレス：%p\n",&x);
	printf("x のサイズ；%d\n",sizeof(x));
	printf("a のアドレス：%p\n",a);
	printf("a のサイズ：%d\n",sizeof(a));
	printf("a[0] のアドレス：%p\n",&a[0]);


	return 0;
}
