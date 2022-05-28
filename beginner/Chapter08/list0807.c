#include <stdio.h>

int fact(int n)
{
	if ( n > 0 )
		return	n * fact(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;
	
	printf("数字を入力してください。");
	scanf("%d",&num);

	printf("%dの階上は%dです\n",num,fact(num));

	return 0;
}		
