#include <stdio.h>

typedef struct {
	char name[10];
	double hei;
	double wei;
} data;



int main(void)
{
	FILE *fp;
	data d[10];
	data tmp;
	int i = 0;
	int j;
	int ninzu = 0;
	double hsum = 0;
	double wsum = 0;

	if(( fp = fopen("hw.dat","r")) == NULL )
		printf("ファイルオープンエラー");
	else {
		while((fscanf( fp, "%s%lf%lf",&d[i].name,&d[i].hei,&d[i].wei) == 3)) {
			ninzu++;
			hsum += d[i].hei;
			wsum += d[i].wei;
			i++;
		}
	}

	for ( j=0; j < ninzu - 1; j++ ) {
		for ( i = ninzu -1; i > j; i--) {
			if( d[i-1].hei > d[i].hei ) {
				tmp = d[i-1];
				d[i-1] = d[i];
				d[i] = tmp;
			}
		}
	}

	for ( i=0; i < ninzu; i++ ) {
		printf(" %-10s, %5.1f, %4.1f\n",d[i].name,d[i].hei,d[i].wei);	
	}
	printf("-------------------------\n");
	printf(" 平均        %5.1f, %4.1f\n",hsum/ninzu,wsum/ninzu);

	return 0;
}
		
