#include <stdio.h>

struct hat {
	char  name[10];
	int   height;
	float weight;
};


void kakikae( struct hat *b)
{
	b->height = 185;
	(*b).weight = 55.2;
}


int main (void)
{
	struct hat a = {"hattori",168,55.3};

	kakikae( &a); 

	printf("%s:%d:%.1f\n",a.name,a.height,a.weight);

	return 0;
}
