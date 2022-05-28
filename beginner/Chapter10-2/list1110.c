#include <stdio.h>
#include <string.h>

char *hstrcat(char *s1,const char *s2)
{

	char *tmp = s1;

	while( *s1)
		s1++;

	while( *s1++ = *s2++)
		;

	return tmp;
}

char *hstrncat(char *s1,const char *s2,int n)
{
	char *tmp = s1;

	while( *s1 )
		s1++;

	while( n--)
		if(!( *s1++ = *s2++))  break;
	
	*s1 = '\0';

	return tmp;
}
	


int main(void)
{
	char str1[10] = "abc";
	char str2[10] = "def";
	
/*** strcat() 
	printf("%s\n",hstrcat(str1,str2));
	printf("%s\n",strcat(str1,str2));
***/

/*** strncat() **/
	printf("%s\n",hstrncat(str1,str2,2));
/***
	printf("%s\n",strncat(str1,str2,2));
***/
	return 0;
}
