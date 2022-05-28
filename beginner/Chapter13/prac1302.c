#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[10];

	printf("ファイル名　＞");
	scanf("%s",fname);

	fp = fopen(fname,"w");

	if(fp == NULL)
		printf("err\n");
	else {
		printf("%sの中身を消去しました。\n",fname);
		fclose(fp);
	}

	return 0;
}
