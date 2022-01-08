#include<stdio.h>

/*** 正の整数を読み込んで返す ***/
int input_num(void)
{
	int num;
	do {

		printf("正の整数を入力してください。＞");
		scanf("%d",&num);
		if (num <= 0)
			puts("正の整数を入力してください。");
	} while(num <= 0);
	return num;
}

/*** 非負の整数を反転して返す ***/
int rev_int(int num)
{
	int tmp = 0;
	
	while (num > 0)
	{
		tmp = num % 10;
		tmp *= 10;
		num /= 10;
	}
	return tmp;
}

/*** 関数呼び出し ***/
int main(void)
{
/*	int nx = input_num(); */
	printf("反転した値は%dです。\n",rev_int(input_num()));

	return 0;
}
