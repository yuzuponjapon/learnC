#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	int a,b,c;
	int no,ans;
	clock_t c1, c2;
	double req_time;

	srand(time(NULL));

	a = rand() % 100;
	b = rand() % 100;
	c = rand() % 100;
	ans = a + b + c;

printf("ans = %d\n",ans);

	printf(" %d + %d + %d = >",a,b,c);
	c1 = clock();

	while(1) {	
		scanf("%d",&no);	
		if( no == ans)
			break;
		printf("違います.再入力 >");
		
	}

	c2 = clock();
printf("c2 = %f\n",(double)c2);
		
	req_time = (double)( c2 - c1) / CLOCKS_PER_SEC;
	printf("%.2f秒で正解です\n",req_time);

	return 0;
}
