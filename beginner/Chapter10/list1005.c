#include <stdio.h>


void sub_diff(int a,int b,int *sum,int *diff)
{
	*sum = a + b;

	if(a > b)
		*diff = a - b;
	else
		*diff = b - a;

}

	
int main(void)
{
	int a,b,sum,diff;

	printf("２つの整数を入力してください。\n");
	printf("整数A : ");		scanf("%d",&a);
	printf("整数B : ");		scanf("%d",&b);

	sub_diff(a,b,&sum,&diff);

	printf("和は%dで差は%dです。\n",sum,diff);

	return 0;
}	


