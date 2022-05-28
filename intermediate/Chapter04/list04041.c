#include <stdio.h>
#include <string.h>


int check(const char *s,int len)
{
	int i;

	len = strlen(s);

	for(i = 0; i < len; i++) {
		if(!isdigit(s[i]))
			return 1;
	}
	
	return 0;
}

int main(void) 
{
	int len;
/*	char str[20]; */
	char *str = "1v234";
	int flag;
/*
	printf("input >");
	scanf("%s",str);
*/
	len = strlen(str);	
printf("len = %d\n",len);

	flag = check(str,len);

	switch (flag) {
		case 0:	printf("%s ok\n",str);	break;
		case 1: printf("%s ng\n",str); break;
	}

	return 0;
}
