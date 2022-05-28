#include<stdio.h>

int main(void)
{

	int retry;

	do
	{
		int no;

		printf("入力してください。＞");
		scanf("%d",&no);

		if ( no % 2 )
			puts("奇数です");
		else
			puts("偶数です");

		printf("もう一度？　Y--＞０/N-->9 ＞");
		scanf("%d",&retry);

	} while ( retry == 0 );

	return 0;
}
