#include <stdio.h>
#define NUM 10

int main(void)
{
	double bi[NUM];
	double bi_r[NUM] = {0};

	FILE *fp;

	int i;


	for( i=0; i < NUM; i++) {
		printf("input bi[%d] >",i);
		scanf("%lf",&bi[i]);
	}

	
	if((fp = fopen("bi.dat","wb")) == NULL)
		printf("\afile wb open error\n");
	else {
		fwrite(bi,sizeof(double),NUM,fp);
		fclose(fp);
	}

	if((fp = fopen("bi.dat","rb")) == NULL)
		printf("\afile rb open error\n");	
	else {
		fread(bi_r,sizeof(double),NUM,fp);
		fclose(fp);
	}

	for( i=0; i < NUM; i++) {
		printf("bi_r[%d] = %f\n",i,bi_r[i]);
	}

	return 0;
}
