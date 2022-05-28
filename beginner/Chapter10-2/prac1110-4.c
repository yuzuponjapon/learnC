#include <stdio.h>

double k_atof( char *s)
{
	double adove = 0;
	double after = 0;

	while( '0' <= *s && *s <= '9' ) {
		adove *= 10;
		adove += *s - '0';
		s++;
	}
	if( *s == '.') {
		s++;
		int warukaisu = 1;
		int i;

		while( '0' <= *s && *s <='9') {
			after = ( *s - '0'); 
			for( i = 0; i < warukaisu; i++) {
				after /= 10;
			}	
			adove += after;		
			warukaisu++;
			s++;
		}
	}
	return adove;
}





int main(void)
{
	char str[20];

	printf("実数を入力してください＞");
	scanf("%s",str);

	printf("入力値は%fです。\n",k_atof(str));

	return 0;
}
