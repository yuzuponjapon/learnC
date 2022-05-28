#include <stdio.h>
#define  NUMBER  5

void bsort(int a[], int n)
{

	int j,i;
	
	for(i=0;i<n-1;i++)  {
		for(j=n-1;j>i;j--)  {
			if(a[j-1] > a[j])  {
				printf("i=%d : j=%d\n",i,j);
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}
}

int main(void)
{

	int height[NUMBER];
	int i;

	printf("%d人分の身長を入力してください。\n",NUMBER);
	for(i=0;i<NUMBER;i++)  {
		printf("%d人目＞",i);	
		scanf("%d",&height[i]);
	}	
			
	bsort(height,NUMBER);

	puts("昇順ソート結果");

	for(i=0;i<NUMBER;i++)  
		printf("%2d番目：%d\n",i+1,height[i]);

	return 0;
}
