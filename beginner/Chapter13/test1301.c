#include <stdio.h>
#include <float.h>

int main(void)
{


	double pi = 3.14159265359;

	printf("バイト数 = %d\n",sizeof(double));

	printf("lf = %lf\n",pi);
	printf("lg = %lg\n",pi);

	return 0;
}
