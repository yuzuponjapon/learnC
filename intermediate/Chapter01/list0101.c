#include <stdio.h>

int main(void)
{

	int no;
	int ans = 7;

	printf("０～９の数字を当ててください。\n\n");

	printf("いくつかな：");
	scanf("%d",&no);

	if(no > ans)
		printf("\aもっとちいさいよ。\n");
	else if(no < ans)
		printf("\aもっと大きいよ。\n");
	else
		printf("正解です。\n");

	return 0;

}
