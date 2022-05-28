#include <stdio.h>
#include <stdlib.h>
/*****************/
/*** 自作 atoi ***/
/*****************/
/****************************************

int k_atoi(const char *s)
{

	int keta = 0;
	int result = 0;
	int i;
	int j;
	int tmp = 0;
	

	while('0' < s[keta] && s[keta] < '9')  * 桁数確認 *
		keta++



	int kakerukaisu = keta - 1;

	for( i=0; i < keta; i++ ) {  * 桁数分ループ *
		tmp = s[i] - '0';
		for( j=0; j < kakerukaisu; j++) {  * *s　掛ける１０のループ *
			tmp = tmp * 10;
		}
		result += tmp;		
		kakerukaisu--;
	}

	return result;
}
*****************************************/			

/********************/
/*** 自作 atoi 改 ***/
/********************/

int k_atoi(const char *s)
{
	int sum = 0;
	while( *s != 0 ) {
		sum += *s - '0';
		sum *= 10;
		s++;
	}
	sum /= 10;  
		
	return sum;
}





int main(void)
{

	char str[20];
	int num;
		

	printf("数字を入力してください。＞");
	scanf("%s",str);

	num = k_atoi(str);

	printf("整数で%dです。\n",num);

	return 0;
}

