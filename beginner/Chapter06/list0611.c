#include<stdio.h>

#define NUMBER 5

int max_of(int v[],int n)
{
	int i;
	int max = 0;
	for(i = 0;i < n;i++) {
		if(v[i] > max)
			max = v[i];
	}
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int eng_max;
	int mat_max;

	printf("%d人分の点数を入力してください。\n",NUMBER);

	for(i=0;i < NUMBER;i++) {
		printf("[%2d] 英語：",i+1);  scanf("%d",&eng[i]);
		printf("     数学：");  scanf("%d",&mat[i]);
	}

	eng_max = max_of(eng,NUMBER);
	mat_max = max_of(mat,NUMBER);
	
	printf("英語の最高点は%dです。\n",eng_max);
	printf("数学の最高点は%dです。\n",mat_max);

	return 0;
}
