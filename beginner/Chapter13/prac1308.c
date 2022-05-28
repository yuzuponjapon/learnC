#include <stdio.h>


int main(void)
{


	FILE *sfp;
	FILE *dfp;

	char s_name[FILENAME_MAX];
	char d_name[FILENAME_MAX];

	char ch;


	printf("source file name >");
	scanf("%s",s_name);

	printf("destination file name >");
	scanf("%s",d_name);


	if((sfp = fopen(s_name,"r")) == NULL)
		printf("\asource file open error\n");
	else {
		if((dfp = fopen(d_name,"w")) == NULL)
			printf("\adestination file open error\n");
		else {
			while((ch = fgetc(sfp)) != EOF) {
				putchar(ch);
				fputc(ch,dfp);
			}
		}
	}
	
	return 0;
}
