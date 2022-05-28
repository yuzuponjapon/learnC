#include <stdio.h>

int main(void)
{
	int a[] = {1,2,3,4,5};
	printf("a[1]のアドレスは%p\n",&a[1]);
	printf("a[2]のアドレスは%p\n",&a[2]);
	printf("a[3]のアドレスは%p\n",&a[3]);

	int *pa = a;
	printf("*p = %d p = %p \n",*pa,pa);
	printf("*(p+1) = %d  (p+1)のアドレス = %p\n",*(pa+1),pa+1);

	long int la[] = {1,2,3,4,5};
	printf("size %d\n",sizeof(long int));
	long int *pla = la;
	printf("la[0] = %d  la[0]のアドレス %p\n",la[0],&la[0]);
	printf("la[1] = %d  la[1]のアドレス %p\n",la[1],&la[1]);
	printf("*pla  = %d  pla  のアドレス %p\n",*pla,pla);
	printf("*(pla+1) = %d  pla+1のアドレス %p\n",*(pla+1),pla+1); 


	printf("char size = %d\n",sizeof(char));
	printf("int  size = %d\n",sizeof(int));
	char *p = "abcde";
	printf("p = %s  アドレス = %p\n",p,p);
	p = p + 1;
	printf("p = %s  アドレス = %p\n",p,p);
	return 0;
}
