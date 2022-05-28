#include <stdio.h>

int main(void)
{

	int no,i;

	printf("何段？＞");
	scanf("%d%",&no);

	for(i=1;i<=no;i++) {
		printf("%*d\n",i,i % 10);
	}
	return 0;
}
