#include <stdio.h>
#define NUMBER 5


void swap(int *pa,int *pb) 
{
	int tmp;
	
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;

}


void bsort(int sten[NUMBER],int n) 
{
	int i,j;

	for(i=0;i<n-1;i++) {
		for(j=n-1;j>i;j--) {
			if(sten[j-1] > sten[j])
				swap(&sten[j-1],&sten[j]);
		}
	}
}
				


int main(void)
{
	int ten[NUMBER];
	int i;

	printf("%d人の点数を入力してください。\n");

	for(i=0;i<NUMBER;i++) {
		printf("%d番：",i+1);
		scanf("%d",&ten[i]);
	}

	bsort(ten,NUMBER);

	printf("昇順にソートしました。\n");

	for(i=0;i<NUMBER;i++) {
		printf("%d番：%d\n",i+1,ten[i]);
	}

	return 0;
}
		
