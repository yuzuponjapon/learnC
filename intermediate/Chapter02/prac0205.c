#include <stdio.h>
#include <time.h>



int mondai()
{
	int ans;
int i;

for(i=0;i<10000000;i++) {
	ans++;
} 

	srand(time(NULL));
	int num1 = rand() % 10;
	int num2 = rand() % 10;

	printf(" %d + %d = ", num1, num2);

	while(1) {
		scanf("%d", &ans);
		if( ans == num1 + num2)
			break;
		else
			printf("\a違います = ");
	}
	
	return 0;
}
	

int main(void)
{

	clock_t c1, c2;
	double csum = 0;
	int i;
	double log[10];

	for(i=0; i < 10; i++) {
		c1 = clock();
		mondai();
		c2 = clock();
		log[i] = (double)(c2 - c1) / CLOCKS_PER_SEC;
	}

	for(i=0; i < 10; i++) {
		printf(" %2d回目　%f秒\n",i+1,log[i]);
		csum += log[i];
	}
	
	printf("合計%f秒です。\n",csum);

	return 0;
}

	


