#include <stdio.h>
#include <stdlib.h>



double k_atol(const char *str)
{
	int ue_keta,sita_keta = 0;
	int i = 0;


	while( '0' <= str[i] && str[i] <= '9') {     /*** 整数桁カウント ***/
		ue_keta++;
		i++;
	}




	if ( str[i] == '.')  {          /*** 小数桁カウント ***/
		i++;
		while( '0' <= str[i] && str[i] <= '9') {
			sita_keta++;
			i++;
		}
	}



	double tmp = 0;
	double sum = 0;
	int j;


	int kakerukaisu = ue_keta -1;			



	for( i = 0;i < ue_keta; i++) {     /*** 整数計算 ***/
		tmp = str[i] - '0';
		for(j = 0; j < kakerukaisu; j++) {	
			tmp = tmp * 10;
		}
		sum += tmp;
		kakerukaisu--;
	}


	int warukaisu = 1;
	i++;

	for( i; i <= (ue_keta + sita_keta); i++) {    /*** 小数計算 ***/
		tmp = str[i] - '0';

		for(j = 0; j < warukaisu; j++) {
			tmp = tmp / 10;
		}
		sum += tmp;
		warukaisu++;
	}

	return sum;
}




int main(void)
{
	char s[30];

	printf("実数を入力してください。＞");
	scanf("%s",s);

	printf("atolで変換実数は%fです\n",atof(s));
	printf("入力された実数は%fです\n",k_atol(s));
	
	return 0;
}
