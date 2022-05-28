#include <stdio.h>



int main(void)
{

	char file_name[20];
	FILE *fp;
	int cnt = 0;
	int ch;


	printf("file name >");
	scanf("%s",&file_name);


	if((fp = fopen(file_name,"r")) == NULL ) {
		printf("file open err\n");
	}
	else {
		while( (ch = fgetc(fp)) != EOF ) {
			putchar(ch);
			if('0' <= ch && ch <= '9')
				cnt++;	
		}
		printf("数字の数は\"%d\"です。\n",cnt);
		fclose(fp);
	}

	return 0;

}	
