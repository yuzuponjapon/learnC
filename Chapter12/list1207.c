#include <stdio.h>


typedef struct {
	char name[10];
	int age;
	float height;
	float weight;
} men;


void swap( men *a, men *b)
{
printf("swap start\n");
	men tmp = *a;
	*a = *b;
	*b = tmp;
printf("swap end\n");
}



void sort_sub( men data[], int n)
{
printf("sort start\n");
	int i,j;
	men tmp;
	for( i = 0; i < n-1; i++) {
		for( j = n-1; j > i; j--) {
			if( data[j-1].height > data[j].height ) {
				swap( &data[j-1],&data[j]);
			}
		}
	}
printf("sort end\n");
}



int main(void)
{
	men a[5] = {	
		{"sato",23,182.5,65.1},
		{"kato",24,162.7,58.5},
		{"ito",22,188.2,65.9},
		{"yosida",25,172.4,59.2},
		{"tanaka",31,175.6,62.4},
	};

	int i;

/*
	for( i=0; i<5; i++) {
		printf("name[%d] >",i);		scanf("%-10s",&a[i].name);
		printf("age[%d] >",i);		scanf("%d",&a[i].age);
		printf("height[%d] >",i);	scanf("%f",&a[i].height);
		printf("weight[%d] >",i);   scanf("%f",&a[i].weight);
	}
*/

	printf("入力値\n");
	for( i=0; i<5; i++) {
		printf(" %-10s:  %3d:  %3.1f:  %3.1f\n",
				a[i].name,a[i].age,a[i].height,a[i].weight);
	}

	sort_sub(a,5);

	printf("ソート結果\n");
	for( i=0; i<5; i++) {
		printf(" %-10s:  %3d:  %3.1f:  %3.1f\n",
				a[i].name,a[i].age,a[i].height,a[i].weight);
	}

	return 0;
}
