#include <stdio.h>

void test_cp(char *s1,char *s2,int n)
{
	while(n--)
		*s1++ = *s2++;
}


int main(void)
{
	

	char str1[30];
	char str2[30];
	int  len = 0;

	printf("文字を入力してください");
	scanf("%s",str1);

	printf("上書きする文字を入力してください。");
	scanf("%s",str2);

	printf("コピーする文字数を入力してください。");
	scanf("%d",&len);
	
	test_cp(str1,str2,len);

	printf("%s\n",str1);

	return 0;

}

