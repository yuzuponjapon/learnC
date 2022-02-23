#include <string.h>
#include <stdio.h>



int main(void)
{


	char *str1 = "abcdefg";
	char str2[7] = "hijklmn";
	char str3[10] = "xyz1234567";



/*** strlen() ***/
	printf("str1 = %s\n",str1);
	int len;
	len = strlen(str1);
	size_t len2;
	len2 = strlen(str1);
	printf("len = %d:%d:%d\n",strlen(str1),len,len2);



/*** strcpy() ***/
	char *cpy;
	
/*	cpy = strcpy(str1,str2);*/	
	printf("strcpy = %s\n",strcpy(str2,str1));


/*** strncpy ***/
	printf("strncpy = %s\n",strncpy(str2,str3,2));
	printf("strncpy = %s\n",strncpy(str2,str3,3));
	printf("strncpy = %s\n",strncpy(str2,str3,4));
	printf("strncpy = %s\n",strncpy(str2,str3,10));
	
	char *of_check = str2;
	printf("%s\n",of_check);
	printf("%c\n",of_check[0]);
	printf("%c\n",of_check[1]);
	printf("%c\n",of_check[2]);
	printf("%c\n",of_check[3]);
	printf("%c\n",of_check[4]);
	printf("%c\n",of_check[5]);
	printf("%c\n",of_check[6]);
	printf("%c\n",of_check[7]);
	printf("%c\n",of_check[8]);
	printf("%c\n",of_check[9]);
	printf("%c\n",of_check[10]);

/*** strcat ***/

	return 0;
}
