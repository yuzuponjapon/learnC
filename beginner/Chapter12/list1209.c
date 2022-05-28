#include <stdio.h>
#include <math.h>

#define sqr(n)  ((n) * (n))

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	Point pt;
	double fuel;
} Car;




void put_info( Car c) /* 現在地表示 */
{
	printf("現在位置:(%.2f,%.2f))\n",c.pt.x,c.pt.y);
	printf("残り燃料:%.2fリットル\n",c.fuel);
}


double dist_of( Point pa, Point pb)
{
	return	sqrt( sqr(pb.x - pa.x) + sqr(pb.y - pa.y) );
}


int move_car(Car *c, Point dis)
{

	double d = dist_of(c->pt, dis);				/* 移動距離計算 */
printf("移動距離 = %lf \n",d);
	if(d > c->fuel)								/* 燃料確認	*/
		return 0;

	c->pt = dis;								/* 現在地更新 */

	c->fuel -= d;								/* 燃料更新 */

	return 1;
}


int main(void)
{
	Car mycar = {{0.0,0.0}, 90};
	int ope;


	while( 1 ) {
		Point dest;
		int ope;

		put_info( mycar );								/* 現在地表示 */

		do {											/* 操作確認 */
			printf("移動しますか？【Yes…１/No…０】"); 
			scanf("%d",&ope);	
		} while(!(ope == 1 || ope == 0) );
	
		if (ope == 0)
			break;

		printf("目的地のⅩ座標　＞");	scanf("%lf",&dest.x); /* 移動先入力 */
		printf("目的地のＹ座標　＞");	scanf("%lf",&dest.y);
printf("dest.x = %lf dest.y = %lf \n",dest.x,dest.y);
	
		if ( move_car( &mycar, dest) == 0)				/* 移動処理 */
			printf("\a移動できません\n");
	}
	
	return 0;
}




