#include <stdio.h>
#include <time.h>


int main(void)
{
	char *hd[] = {"グー","チョキ","パー"};
	int human;
	int comp;
	int judge;
	int retry;
	
	int win_no = 0;
	int lose_no = 0;
	int draw_no = 0;


	srand(time(NULL));


	do {
		

		printf("start\n");
		comp = rand() % 3;

		do {
			printf("じゃんけんぽん ");
			int i;
			for(i=0;i<3;i++) {
				printf("%d:%s  ",i,hd[i]);
			}
			scanf("%d",&human);
		} while(human < 0 || 2 < human);

		judge = ( human - comp + 3) % 3;
		
		printf("あなたは%s、わたしは%sで、",hd[human],hd[comp]);

		switch(judge) {
			case	0:	printf("引分けです。\n");
						draw_no++;
						break;
			case	1:	printf("あなたの負けです。\n");
						lose_no++;
						break;
			case	2:	printf("あなたの勝ちです。\n");
						win_no++;
						break;
		}

		printf("続けますか？ 0:いいえ  1:はい >");
		scanf("%d",&retry);
	
	} while(retry == 1);

	printf("結果\n");
	printf("勝ち数   %d回\n",win_no);
	printf("負け数   %d回\n",lose_no);
	printf("引分け   %d回\n",draw_no);

	return 0;
}
