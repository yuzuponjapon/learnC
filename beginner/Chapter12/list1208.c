#include <math.h>
#include <stdio.h>

#define sqr(n)	((n) * (n))

typedef struct {
	double x;
	double y;
} Point;

double dis(Point pa, Point pb)
{
	return sqrt((double)( sqr(pa.x - pb.x) + sqr(pa.y - pb.y)) );
}


int main(void)
{

	Point crnt, dest;

	printf("現在地のⅩ座標：");		scanf("%lf",&crnt.x);
	printf("現在地のＹ座標：");		scanf("%lf",&crnt.y);
	
	printf("目的地のⅩ座標：");		scanf("%lf",&dest.x);
	printf("目的地のＹ座標：");		scanf("%lf",&dest.y);

	printf("目的地までの距離は%.2fです。\n",dis( crnt, dest));

	return 0;
}
