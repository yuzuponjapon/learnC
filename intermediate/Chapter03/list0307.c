#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int human;
	int comp;
	int judge;
	int retry;
	char *hd[] = {"グー","チョキ","パー"};

	srand(time(NULL));

	printf("star\n");

	do {
		comp = rand() % 3;
		do {
			printf("\n\aじゃんけんポン ");
			for(i = 0; i < 3; i++)
				printf(" %d:%s ",i,hd[i]);
			printf(" > ");
			scanf("%d",&human);
		} while( human < 0 || 2 < human);

		printf("私は%sで、あなたは%sです。\n",hd[comp],hd[human]);

		judge = (human - comp + 3) % 3;

		switch (judge) {
			case 0:		puts("引き分けです。");			break;
			case 1:		puts("あなたの負けです。");		break;
			case 2:		puts("あなたの勝ちです。");		break;
		}

		printf("もう一度しますか？ 0:いいえ  1:はい >");
		scanf("%d",&retry);
	
	} while( retry == 1);

	return 0;
}
