#include <stdio.h>
#include <stdlib.h>

void del_num(char *s)
{
	int cnt = 0;
	int i;
	char tmp;

	for(i=0; i<20; i++) {
		tmp = *(s+i);
		if(tmp == 0)
			break;
		if('0'<= tmp && tmp <= '9')
			continue;
		else {
			*(s+cnt) = tmp;
			cnt++;
		}
	}
	*(s+cnt) = 0;
}

int main(void)
{
	char str[20];

	printf("input >");
	scanf("%s",str);

	del_num(str);

	printf("%s\n",str);

	return 0;
}
