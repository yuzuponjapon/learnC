#include <stdio.h>
#include <time.h>


int main(void)
{
	int i,j;
	int x[4] = {0};

	srand(time(NULL));

	for(i=0;i<4;i++) {
		do {
			x[i] = rand() % 5;
			for(j=0;j<i;j++) {
				if(x[j]  == x[i])
					break;
			}
printf("%d%d%d%d\n",x[0],x[1],x[2],x[3]);
		} while(j < i);
	}
	
	return 0;
}	
