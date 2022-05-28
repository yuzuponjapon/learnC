#include <stdio.h>
int main(void)
{
	float a;
	double b;
	long double c;

	printf("float >");			scanf("%f",&a);
	printf("double >");			scanf("%lf",&b);
	printf("long double >");	scanf("%lf",&c);

	printf("float       : %f\n",a);
	printf("double      : %lf\n",b);
	printf("long double : %lf\n",c);

	return 0;
}
