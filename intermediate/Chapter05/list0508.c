#include <stdio.h>


#define MAX 10

int main(void)
{

	int a[ MAX ];
	int cnt = 0;
	int retry;
	int i;

	do {
		printf("%d番目 >", cnt + 1);
		scanf("%d",&a[cnt++]);
	
		if(cnt == MAX)
			break;

		printf("続けますか？ [ yes = 1 : no = 0 ]");	
		scanf("%d",&retry);

	} while( retry == 1);

	for(i = 0; i < cnt; i++)
		printf("%2d番目 : %d\n", i + 1, a[i]);


	return 0;
} 
