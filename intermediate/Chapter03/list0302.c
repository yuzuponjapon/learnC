#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{

	int comp,human,judge,retry;

	srand(time(NULL));

	do {
		comp = rand() % 3;

		do {
			printf("じゃんけん　>");
			scanf("%d",&human);
		} while( human < 0 || 2 < human);
/*		} while( !( 0 <= human && human <= 2));  */:


		printf("私は");
		switch( comp) {
			case 0:	printf("グー");		break;
			case 1: printf("チョキ");	break;
			case 2: printf("パー");		break;
		}
		printf("で、あなたは");

		switch( human) {
			case 0:	printf("グー");		break;
			case 1: printf("チョキ");	break;
			case 2: printf("パー");		break;
		}
		printf("です。\n");


		judge = ( human - comp + 3) % 3;

		switch( judge) {
			case 0: puts("引き分け");			break;
			case 1: puts("あなたの負けです");	break;
			case 2: puts("あなたの勝ちです");	break;
		}

		printf("続けますか？　(0)いいえ　(1)はい >");
		scanf("%d",&retry);
	} while( retry == 1);

	return 0;
}

