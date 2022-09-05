#include <stdio.h>


int med3( int a, int b, int c)
{

	if( a >= b)
	{
		if( b >= c)
		{
			return b;		/* a >= b >= c */
		}
		else
		{
			if( a <= c)
			{
				return a;	/* c >= a > b */
			}
			else
			{
				return c;	/* a > c > b */
			}
		}
	}
	else
	{
		if( a > c)
		{
			return a;		/* b > a > c */
		}
		else
		{
			if( b > c)
			{
				return c;	/* b > c > a */
			}
			else
			{
				return b;	/* c > b > a */
			}
		}
	}
}

int main(void)
{
	int a, b, c;

	printf("a >");	scanf("%d",&a);
	printf("b >");	scanf("%d",&b);
	printf("c >");	scanf("%d",&c);

	printf("med = %d\n", med3( a, b, c));

	return 0;
}




