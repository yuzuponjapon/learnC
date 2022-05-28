#include <stdio.h>



int main(void)
{
	int ch;
	FILE *fp;
	char file_name[20];
	int cnt = 0;

	printf("file name >");
	scanf("%s",file_name);
	
	if((fp = fopen(file_name,"r")) == NULL )
		printf("\afile open err\n");
	else {
		while( ( ch = fgetc(fp)) != EOF) {
			if(ch == '\n')
				cnt++;
			putchar(ch);
		}
		printf("%d行です\n",cnt);
		fclose(fp);
	}
	
	return 0;
}
