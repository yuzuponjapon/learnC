#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;

	if ( b > max)  max = b;
	if ( c > max)  max = c;

	return max;
}

int main( void )
{
	int a,b,c;

	puts("３つの整数を入力してください。");

	printf("整数 a:");  scanf("%d",&a);
	printf("整数 b:");  scanf("%d",&b);
	printf("整数 c:");  scanf("%d",&c);

	printf("最大は%dです。\n",max3(a,b,c));

	return 0;
}

