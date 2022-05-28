#include <stdio.h>

void de_date(int *dy,int *dm, int *dd)
{
	if(*dd != 1) {
        printf("*dd = %d\n",*dd);
		(*dd)--;
        printf("*dd = %d\n",*dd);
	}
	else {
		switch(*dm) {
			case 1:
				(*dy)--;
				*dm = 12;
				*dd = 31;
				break;
			case 3:
				(*dm)--;
				if(*dy % 4 == 0)
					*dd = 29;
				else
					*dd = 28;
				break;
			case 5:
			case 7:
			case 10:
			case 12:
				(*dm)--;
				*dd = 30;
				break;
			case 2:
			case 4:
			case 6:
			case 8:
			case 9:
			case 11:
				(*dm)--;
				*dd = 31;
				break;
		}
	}
}


int main(void)
{
	int y,m,d = 0;
	int op = 0;

	do {
		printf("年を入力してください：");
		scanf("%d",&y);
	} while(y < 1);

	do {
		printf("月を入力してください：");
		scanf("%d",&m);
	} while(m < 1 || m > 12);

	do {
		printf("日を入力してください：");
		scanf("%d",&d);
	} while(d < 0 || d > 31);

	printf(" %d/%d/%d \n",y,m,d);

	do {
		printf("１：前日　２：終了　３：次日　＞");
		scanf("%d",&op);
		switch ( op ) {
			case 1:
				de_date(&y,&m,&d);	
				printf(" %d/%d/%d \n",y,m,d);
				break;
			case 2:
				break;
/*			case 3:
				in_date(&y,&m,&d);
				printf(" %d/%d/%d \n",y,m,d);
				break;
*/
			default:
				break;
		}
	} while( op != 2 );

	return 0;
}

