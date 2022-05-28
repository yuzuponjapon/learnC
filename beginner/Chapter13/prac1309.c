#include <stdio.h>
#include <ctype.h>



int main(void)
{

	FILE *sfp;
	FILE *dfp;

	char ch;

	char s_file[FILENAME_MAX];
	char d_file[FILENAME_MAX];


	printf("source file name >");
	scanf("%s",s_file);

	printf("distination file name >:");
	scanf("%s",d_file);

	if((sfp = fopen(s_file,"r")) == NULL)
		printf("\asource file open error\n");
	else {
		if((dfp = fopen(d_file,"w")) == NULL)
			printf("\adistination file open error\n");
		else {
			while((ch = fgetc(sfp)) != EOF) {
				putchar(toupper(ch));
				fputc(ch,dfp);
			}
		}
	}

	return 0;
} 
		
