#include <stdio.h>

int k_atoi(char *s)
{
	int sum = 0;

	while( *s != 0 ) {
		if( '0' <= *s && *s <= '9') {
			sum *= 10;
			sum += *s - '0';
			s++;
		} 
	}
	
	return sum;
}






int main(void)
{
	char str[20];

	printf("実数を入力してください＞");
	scanf("%s",str);

	printf("入力値は%dです。\n",k_atoi(str));

	return 0;
}
