#include <stdio.h>

int main(void)
{
	int no;
	int ans = 7;

	while(1) {
		printf("no >");
		scanf("%d",&no);

		if(no > ans)
			printf("もっと小さい。\n");
		else if(no < ans)
			printf("もっと大きい。\n");
		else
			break;
	}

	printf("正解です。\n");

	return 0;
}
