#include <stdio.h>

int main(void)
{

	char str[20];

	printf("お名前は？＞");
	scanf("%s",str);

	printf("こんにちは、%sさん！\n",str);

	return 0;
}
