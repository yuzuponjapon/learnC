#include <ctype.h>
#include <stdio.h>


int main(void)
{

	int n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE *fp;
	char fname[FILENAME_MAX];

	printf("file name >");
	scanf("%s",fname);

	if((fp = fopen(fname,"rb")) == NULL ) {
		printf("file open error\n");
		return 0;
	}

	while(( n = fread( buf,1,16,fp)) > 0) {
		int i;

		printf("%08lx ",count);

		for( i = 0; i < n; i++) 
			printf("%02x ",buf[i]);

		if( n < 16) {
			for( i = n; i < 16; i++)
				printf("   ");
		}

		for( i = 0; i < n; i++) {
	/*		putchar((int)(isprint(buf[i]) ? (int)buf[i]: "."));  */
			if(isprint(buf[i]))
				putchar(buf[i]);
			else
				putchar(',');
		}

		putchar('\n');
		
		count += 16;
	}

	fclose( fp );
	
	return 0;
} 
