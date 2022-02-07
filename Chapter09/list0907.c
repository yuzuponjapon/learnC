#include <stdio.h>

int main(void)
{
	char moji[3][30];
	int i;

	printf("文字列を入力してください。\n");

	for(i = 0;i < 3;i++) {
		printf("moji[%d] :",i);
		scanf("%s",moji[i]);
	}

	for(i = 0;i < 3;i++) {
		printf("moji[%d] = :\"%-8s\"\n",i,moji[i]);
	}

	return 0;
}	
