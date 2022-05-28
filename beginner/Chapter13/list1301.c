#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc","r");

	if(fp == NULL)
		printf("\aerr\n");
	else {
		printf("open\n");
		fclose(fp);
	}

	return 0;
}
