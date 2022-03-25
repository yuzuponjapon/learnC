#include <stdio.h>

int main(void)
{

	FILE *fp;
	double pi = 3.14159265358979323846;

	printf("変数pi = %23.21f\n",pi);

	if((fp = fopen("PI.bin","wb")) == NULL)
		printf("\aPI.bin open error\n");
	else {
		fwrite(&pi,sizeof(double),1,fp);
		fclose(fp);
	}

	if((fp = fopen("PI.bin","rb")) == NULL)
		printf("\afile open error\n");
	else {
		fread(&pi,sizeof(double),1,fp);
		printf("読込pi = %23.21f\n",pi);
		fclose(fp);
	}
	
	return 0;
}
