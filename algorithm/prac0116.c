#include <stdio.h>


void triLB(int no)
{
	int i,j;
	
	for(i = 0; i < no; i++) {
		for(j = 0; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triRB(int no)
{
	int i,j;
	
	for(i = 0; i < no; i++) {
		printf("%*s", no - i -1, "");
		for(j = 0; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triLU(int no) 
{
	int i,j;

	for(i = 0; i < no; i++) {
		for(j = 0; j < no -i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triRU(int no)
{
	int i,j;

	for(i = 0; i < no; i++) {
		printf("%*s", i, "");
		for(j = 0; j <= no - i -1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}



int main(void)
{
	int no;
	int job;

	do {
		printf("1:左下 2:右下 3:左上 4:右上 >");
		scanf("%d", &job);
	} while( job < 1 || 4 < job );

	printf("no >");
	scanf("%d", &no);

	switch( job ) {
		case 1:
			triLB(no);
			break;
		case 2:
			triRB(no);
			break;
		case 3:
			triLU(no);
			break;
		case 4:
			triRU(no);
			break;
	}

	return 0;
}	
