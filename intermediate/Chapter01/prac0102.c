#include <stdio.h>
#include <time.h>

int main(void)
{

	int unsei;

	srand(time(NULL));
	unsei = rand() % 16;

	printf("今日の運勢は");

	switch ( unsei) {
		case 0:		
		case 1:
		case 2:
		case 3:
		case 4:		printf("大吉です。\n");	break;
		case 5:
		case 6:		
		case 7:		printf("中吉です。\n");	break;
		case 8:
		case 9:
		case 10:	printf("小吉です。\n");	break;
		case 11:
		case 12:	printf("吉です。\n");	break;
		case 13:	printf("末吉です。\n");	break;
		case 14:	printf("凶です。\n");	break;
		case 15:	printf("大凶です。\n");	break;
	}

	return 0;
}
