#include <stdio.h>

int main(void)
{

	int ch;
	FILE *fp;
	char file_name[20];

	printf("file naem >");
	scanf("%s",&file_name);

	if((fp = fopen(file_name,"r")) == NULL )
		printf("file open err\n");
	else {
		while((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}

	return 0;
}
