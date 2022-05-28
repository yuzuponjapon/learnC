#include <stdio.h>

int str_length(const char s[])
{
	int length = 0;
	
	while( s[length] ) {
		length++;
	}
	return length;
}

int main(void)
{
	char str[30];

	printf("文字列を入力してください　：");
	scanf("%s",str);

	printf("文字列\"%s\"の長さは%dです。\n",str,str_length(str));

	return 0;
}
