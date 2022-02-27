#include <stdio.h>

typedef struct {
	char name[10];
	float height;
	float weight;
} a_type;


a_type henkou(char t_na[10], float t_hei, float t_wei)
{
	a_type tmp;

printf("%s\n",t_na);

	tmp.height = t_hei;
	tmp.weight = t_wei + 1;

	return tmp;
}






int main(void)
{
	a_type a;

	a = henkou("tanaka",158.2,55.6);

	printf("%s\n",a.name);
	printf("%.1f\n",a.height);
	printf("%.1f\n",a.weight);

	return 0;
}
