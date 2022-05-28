#include <stdio.h>

int main(void)
{
	int no;
	int i,j;

	printf("何段？＞");
	scanf("%d",&no);

	for(i=1;i<=no;i++) {
		for(j=1;j<i;j++) {
			putchar(' ');
		}
    
		printf("%d\n",i % 10);	
	}
	return 0;
}
