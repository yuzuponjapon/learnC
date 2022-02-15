#include <stdio.h>

void swap(int *p1,int *p2)
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


int main(void)
{
	int n1,n2;

	printf("２つの整数を入力してください\n");

	printf("a :");	scanf("%d",&n1);
	printf("b :");	scanf("%d",&n2);

	swap(&n1,&n2);

	printf("a = %d\n",n1);
	printf("b = %d\n",n2);

	return 0;
}
