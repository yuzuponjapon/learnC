#include <time.h>
#include <stdio.h>


int main(void)
{
	int unsei;

	srand( time(NULL));
	unsei = rand() % 7;

	printf("今日の運勢は");

	switch( unsei) {
		case 0:	printf("大吉です。\n");	break;	
		case 1:	printf("中吉です。\n");	break;
		case 2:	printf("小吉です。\n");	break;
		case 3:	printf("吉です。\n");	break;
		case 4:	printf("末吉です。\n");	break;
		case 5:	printf("凶です。\n");	break;
		case 6:	printf("大凶です。\n");	break;
	}

	return 0;
}

