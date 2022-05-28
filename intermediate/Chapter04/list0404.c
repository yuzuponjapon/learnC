#include <stdio.h>
#include <string.h>


int check(const char s[])
{
	int i,j;
	
	if(strlen(s) != 4)
		return 1;

	for(i = 0; i < 4; i++) {
		if(!isdigit(s[i]))
			return 2;
		for(j = 0; j < i; j++) {
			if( s[i] == s[j])
				return 3;
		}	
	}

	return 0;
}

int main(void)
{
	char s[20] = {0};
	int flag;

	do {

		printf("input >");
		scanf("%s",s);
		
		flag = check(s);

		switch( flag) {
 		   case 1:	printf("４ケタで\n");	break;
 		   case 2:	printf("数字で\n");		break;
 		   case 3:	printf("違う数字で\n");	break;
 		}
	} while( flag != 0);	

	printf("ok\n");

	return 0;

}
 		
