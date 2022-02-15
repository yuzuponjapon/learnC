#include <stdio.h>

void wasa(int a,int b,int *sum,int *diff)
{
	*sum = a + b;
	*diff = (a > b) ? a - b: b - a;
}

int main(void)
{
	int na,nb;
	int wa = 0,sa = 0;

	printf("２つの数字を入力して下さい。\n");
	printf("整数A :");
	scanf("%d",&na);
	printf("整数B :");
	scanf("%d",&nb);

	wasa(na,nb,&wa,&sa);

	printf("和は%dで差は%dです。\n",wa,sa);

	return 0;
}
