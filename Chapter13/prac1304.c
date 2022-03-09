#include <stdio.h>

#define NUMBER 5 

typedef struct {
	char name[10];
	float hei;
	float wei;
} data;


int main(void)
{

	FILE *fp;
	data dat[NUMBER];
	int flag;
	int i;


	printf("データを入力してください。\n");

	for( i = 0; i < NUMBER; i++) {
		printf("名前　＞");		scanf("%s", &dat[i].name);
		printf("身長　＞");		scanf("%f", &dat[i].hei);
		printf("体重　＞");		scanf("%f", &dat[i].wei);

		printf("入力を続けますか？　【Yes…１　No…０】");
		scanf("%d",&flag);
		if( flag == 0 )
			break;
	}
	
	if ((fp = fopen( "test.dat","w")) == NULL )
		printf("open error\n");
	else {
		for( i = 0; i < NUMBER; i++) {  
			fprintf( fp, "%-10s %5.1f %4.1f\n", dat[i].name, dat[i].hei, dat[i].wei);
		}
		fclose(fp);
	}

	return 0;
}
						
