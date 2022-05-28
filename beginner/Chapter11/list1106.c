#include <stdio.h>

void str_copy(char *str_c, char *tmp_c)
{
	while( *str_c++ = *tmp_c++ )
		;

}	



int main(void)
{
	char str[30] = "abc";
	char tmp[30];

	printf("str = \"%s\"\n",str);
	printf("こぴーするのは：");
	scanf("%s",tmp);

	str_copy(str,tmp);

	printf("コピーしました。\n");
	printf("str = \"%s\"\n",str);

	return 0;
}
