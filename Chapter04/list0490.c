#include <stdio.h>
int main(void)
{
	int i, j;
	int x, y;
	int a,b,c,d;



/*** do while 文 ***  入力値チェック  */


	do 	{

		printf("０～１００の整数値　＞");
		scanf("%d",&x);

	}  while (x < 0 || x > 100);



/***  while 文 ***  前後、インクリメント、デクリメント  */

	y = x;
	a = x;
	b = x;
	c = x;
	d = x;

	printf(" -------------------------\n");
	printf(" | x-- | --x | x++ | ++x |\n");

	while ( y-- >= 0 )	{

		printf("| %3d | %3d | %3d | %3d |\n",a--,--b,c++,++d );
	}

	printf(" -------------------------\n");
	putchar('\n');


/***  for 文 ***  break, cotinue 文  */

	for	( i = 1 ; i < x ; i++ ) {
		if ( i * i > x )	break;
		if ( x % i != 0 )	continue;
		printf("%d ｘ %d\n" , i ,  x / i );
	}



/*** ２重ループ  ***/

	puts("５行７列のアスタリスク");

	for ( i = 1 ; i <= 5 ; i++ )	{

		for ( j = 1 ; j <= 7 ; j++ )
			putchar('*');
		putchar('\n');
	}



	return 0;

}
