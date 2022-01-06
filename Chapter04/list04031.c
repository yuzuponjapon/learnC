#include<stdio.h>
int main(void)
{

	int cnt = 0;
	int sum = 0;
	int retry;

	do {
		int t;

		printf("整数を入力してください。＞");
		scanf("%d",&t);

		sum = sum + t;
		cnt = cnt + 1;

		printf("まだ？ 0 = y : 9 = n ＞");
		scanf("%d",&retry);
	} while ( retry == 0);

	printf("合計＝%dで平均＝%.2fです。\n",sum,(double)sum / cnt);

	return(0);
}
