#include<stdio.h>

#define NUMBER	5
#define FAILED	-1

int search(int v[],int key, int n)
{
	int i = 0;

	v[n] = key;	/* 番兵セット */
	
	while(1)  {
		if (v[i] == key)
			break;
			i++;
	}

	return (i < n) ? i : FAILED;
}

int main(void)
{
	int i,ky,idx;
	int vx[NUMBER];

	for(i = 0;i < NUMBER;i++) {
		printf("vx[%d] >",i);
		scanf("%d",&vx[i]);
	}
	printf("探す値 >");
	scanf("%d",&ky);

	if((idx = search(vx,ky,NUMBER)) == FAILED)
		puts("\a失敗");
	else
		printf("%dは%d番目にあります\n",ky,idx + 1);

	return 0;
}
		
