#include <stdio.h>

#define NUNBER 8  /* 学生の人数 */

int main(void)
{

	int tensu[ NUNBER ];

	int i;

	int max,min;



	/* 点数入力 */

	printf("%d人の点数を入力してください。\n",NUNBER);
	
	for( i = 0 ; i < NUNBER ; i++ )
	{
		printf("%d番：",i + 1);
		scanf("%d",&tensu[i]);
	}


	/* 最大小検索 */

	max = min = tensu[0];

	for( i = 1 ; i < NUNBER ; i++ )
	{
		if (tensu[i] > max)	max = tensu[i];
		if (tensu[i] < min)	min = tensu[i];
	}


	/* 結果表示 */

	printf("最高点：%d\n",max);
	printf("最低点：%d\n",min);

	return(0);
} 
