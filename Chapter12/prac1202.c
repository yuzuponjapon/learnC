#include <stdio.h>

typedef struct {
	char name[10];
	float height;
	float weight;
} ktype;




int main(void)
{
	ktype kat;

	printf("namae >");
	scanf("%s",&kat.name);

	printf("height >");
	scanf("%f",&kat.height);

	printf("weight >");
	scanf("%f",&kat.weight);

	printf("%s: %.1f: %.1f\n",kat.name,kat.height,kat.weight);

	return 0;
}
