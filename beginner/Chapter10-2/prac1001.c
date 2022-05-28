#include <stdio.h>


void adjust_num(int *n)
{
	if(*n < 0)
		*n = 0;
	if(*n > 100)
		*n = 100;
}
	

int main(void)
{
	int num;
	printf("整数を入力してください。：");
	scanf("%d",&num);

	adjust_num(&num);

	printf("修正後：%d\n",num);

	return 0;
}
