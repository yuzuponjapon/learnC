#include <stdio.h>

enum animal { Dog, Cat , Monkey , Invalid };

void dog(void)
{
	puts("ワンワン");
}

void cat(void)
{
	puts("にゃー");
}

void monkey(void)
{
	puts("きー");
}


enum animal select(void)
{
	int tmp;
	do  {
		printf("０…犬　１…猫　２…猿　３…終了　：");
		scanf("%d",&tmp);
	}  while ( tmp < 0 || tmp > Invalid );
	return tmp;
}

int main(void)
{
	enum animal selected;
	do  {
		switch ( selected = select())  {
			case Dog    : dog();     break;
			case Cat    : cat();     break;
			case Monkey : monkey();  break;
		}
	}  while ( selected != Invalid );

	return 0;
}
