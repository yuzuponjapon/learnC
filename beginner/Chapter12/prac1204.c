#include <stdio.h>
#include <string.h>

#define NUMBER 5

struct str {
	char name[10];
	int hei;
	float wei;
};


void input_data( struct str tmp_s[], int n)
{
	int i;

	for( i = 0; i < n; i++) {
		printf("name[%d] >", i);	scanf("%s",&tmp_s[i].name);
		printf("hei[%d] >",i);		scanf("%d",&tmp_s[i].hei);	
		printf("wei[%d] >",i);		scanf("%f",&tmp_s[i].wei);
	}
}


void output_data( struct str tmp_s[], int n)
{
	int i;
	
	for( i = 0; i < n; i++) {
		printf(" %-10s: %3d: %3.1f \n",tmp_s[i].name,tmp_s[i].hei,tmp_s[i].wei);	
	}
}

void swap_data(struct str *a, struct str *b)
{
	struct str tmp = *a;
		*a = *b;
		*b = tmp;
} 
		


void sort_data( struct str tmp_s[],int n)
{
	int i,j;
	int s;

	do {
		printf("何の値でソートしますか？ 0: name  1: heigit  2: weight >");
		scanf("%d",&s);
	} while( s < 0 || 2 < s );

	switch ( s ) { 
		case 0:	
			for( i = 0; i < n -1; i++) {
				for( j = n - 1; j > i; j--) {
					if( strcmp((char *)&tmp_s[j-1].name,(char *)&tmp_s[j].name)>0) {
						swap_data( &tmp_s[ j - 1],&tmp_s[j]);
printf("swap  %s: %s: %s: %s; %s \n",&tmp_s[0],&tmp_s[1],&tmp_s[2],&tmp_s[3],&tmp_s[4]);
					}
				}
			}
			break;
		case 1:
			for( i = 0; i < n -1; i++) {
				for( j = n - 1; j > i; j--) {
					if( tmp_s[j-1].hei > tmp_s[j].hei) {
						swap_data( &tmp_s[ j - 1],&tmp_s[j]);
					}
				}
			}
			break;
		case 2:
			for( i = 0; i < n -1; i++) {
				for( j = n - 1; j > i; j--) {
					if( tmp_s[j-1].wei > tmp_s[j].wei) {
						swap_data( &tmp_s[ j - 1],&tmp_s[j]);
					}
				}
			}
			break;
	}
}


int main(void)
{
	struct str s[NUMBER] = {
		{"tanaka",168,56},
		{"sato",192,68.5},
		{"ito",171,62.4},
		{"suzuki",152,48.8},
		{"sasaki",175,61.7},
	};
/*
	input_data(s,NUMBER);
*/
	printf("入力値\n");	
	output_data(s,NUMBER);

	sort_data(s,NUMBER);

	printf("ソート結果\n");
	output_data(s,NUMBER);

	return 0;
}
