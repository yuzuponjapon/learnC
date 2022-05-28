#include <stdio.h>

enum mon {
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
	Invalid
};

enum mon select(void)
{
	int tmp;
	do  {
		printf("１～１２の数字を入力してください。");
		scanf("%d",&tmp);
	}  while(tmp < 1 || tmp > Invalid);

	return tmp;
}

int main(void)
{
	enum mon selected;

	switch ( select() - 1 )  {
		case January : printf("January\n");break;
		case February : printf("February\n");break;
		case March : printf("March\n");break;
		case April : printf("April\n");break;
		case May : printf("May\n");break;
		case June : printf("June\n");break;
		case July : printf("July\n");break;
		case August : printf("August\n");break;
		case September : printf("September\n");break;
		case October : printf("October\n");break;
		case November : printf("November\n");break;
		case December : printf("December\n");break;
	}

	return 0;
}


