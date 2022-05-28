#include<stdio.h>
#define NUMBER  30		/* 人数上限 */

int main(void)
{

	int tensu[NUMBER];
	int bunpu[11] = {0};
	int num;
	int i,j;
/*** 人数入力 ***/

	printf("人数を入力してください。＞");

	do  {
		scanf("%d",&num);

		if (num < 1 || num > NUMBER )
			printf("\a１～%dで、入力してください。＞",NUMBER);
	} while(num < 1 || num > NUMBER);

	printf("%d\n",num);

/*** 点数入力 ***/

	printf("%d人分の点数を入力してください。\n",num);

	for(i = 0;i < num;i++) {
		printf("%d番目；",i+1);
		do {
			scanf("%d",&tensu[i]);
			if(tensu[i] < 0 || tensu[i] > 100)
				printf("\a０～１００で入力してください。：");
		} while(tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

/*** グラフ表示 ***/
/** １００点 **/
	puts("\n--- 分布グラフ ---");
	printf("      100 : ");
	for(j = 0;j < bunpu[10];j++)
		putchar('*');
	putchar('\n');
/** １００点以下 **/
	for(j = 9;j >= 0;j--) {
		printf("%3d ～%3d : ",j*10,j*10+9);
		for(i = 0;i < bunpu[j];i++)
			putchar('*');
		putchar('\n');
	}

	return(0);
}
