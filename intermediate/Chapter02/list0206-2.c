#include <stdio.h>
#include <time.h>

int main(void)
{

	clock_t start,end;
	int no,i;

	start = clock();
	while(1) {
		printf(" > ");
		scanf("%d",&no);
		

		for(i=0,i<1000,i++) {
			end = clock;
		} 

		if( no == 0)
			break;
		end = clock();
		printf(" >%.1f\n",(double)((end - start) / CLOCKS_PER_SEC));
	}
	return 0;
}
		
