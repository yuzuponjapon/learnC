#include <stdio.h>

int main(void)
{

	int no;
	int ans = 7;

	printf("０～９の整数を当ててください。\n");

	while(1) {
		printf("いくつかな：");
		scanf("%d",&no);
	
		if( no > ans)
			printf("もっと小さい\n");
		else if( no < ans)
			printf("もっと大きい\n");
		else
			break;
	}
	printf("正解です\n");

	return 0;
}
