#include <stdio.h>

double k_atof(char *s)
{
	double sum = 0;

	while( '0' <= *s && *s <= '9') {
		sum = sum * 10 + ( *s - '0');
		s++;
	}

	if( *s == '.') {
		s++;
		double keta = 1;
		while( '0' <= *s && *s <= '9') {
			keta /= 10;
			sum += ( *s - '0') * keta;
			s++;
		}
	}

	return sum;
}


int main(void)
{
	char str[20];
	
	printf("実数を入力してください。＞");
	scanf("%s",str);

	printf("入力値は%fです。\n",k_atof(str));

	return 0;
}
