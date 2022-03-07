#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[10];

	printf("ファイル名を入力　＞");
	scanf("%s",&fname);
	
	fp = fopen(fname,"r");

	if( fp == NULL )
		printf("\a%sは存在しません。\n",fname);
	else {
		printf("%sは存在します。\n",fname);
		fclose(fp);
	}

	return 0;
}
