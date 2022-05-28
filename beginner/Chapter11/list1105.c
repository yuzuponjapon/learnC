#include <stdio.h>

int len_cnt(const char *tmp)
{
	int i = 0;

	
/***  これでも動く
	while( tmp[i] )
		i++;
***/
	while(*tmp++)
		i++;

	return i;
}


int main(void)
{
	char str[30];

	printf("文字を入力してください。：");
	scanf("%s",str);

	printf("\"%s\"の文字数は%dです。\n",str,len_cnt(str));

	return 0;
}
