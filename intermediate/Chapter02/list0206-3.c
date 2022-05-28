#include <stdio.h>
#include <time.h>


int main(void)
{

	time_t  t_start, t_end;
	clock_t start,end;
	int no;
	int a,b,c;

	srand( time(NULL));
	a = rand() % 100;
	b = rand() % 100;
	c = rand() % 100;
	
printf("ans = %d\n",a+b+c); 
	printf("%d + %d + %d >",a,b,c);
	start = clock();
	t_start = time(NULL);

	while(1) {
int i,test;
for(i=0;i<1000000000;i++) {
	test = a+b+c;
}	
		scanf("%d",&no);
		if(no == a + b + c)
			break;
		printf("違う\n");
	}
	
	end = clock();
	t_end = time(NULL);

	printf("clock = %f秒 time = %ld で正解\n",
				(double)( end - start) / CLOCKS_PER_SEC,
				t_end -  t_start);

	return 0;

}
