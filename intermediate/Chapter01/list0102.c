#include <stdio.h>

int main(void)
{

	int no;
	int ans = 7;

	do {
		printf("no >");
		scanf("%d",&no);

		if(no > ans)
			printf("\aもっと小さい\n");
		else if(no < ans)
			printf("\aもっと大きい\n");
	} while(no != ans);
			
	printf("正解です。\n");

	return 0;
}
