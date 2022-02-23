/*****************/
/*** 自作 atoi ***/
/*****************/
#include <stdio.h>
#include <stdlib.h>

int k_atoi(const char *s)
{

	int keta = 0;
	int result = 0;
	int i;
	int j;
	int tmp = 0;
	

	while('0' < s[keta] && s[keta] < '9')  /* 桁数確認 */
		keta++;



	int kakerukaisu = keta - 1;

	for( i=0; i < keta; i++ ) {  /* 桁数分ループ */ 
		tmp = s[i] - '0';
		for( j=0; j < kakerukaisu; j++) {  /* *s　掛ける１０のループ */
			tmp = tmp * 10;
		}
		result += tmp;		
		kakerukaisu--;
	}

	return result;
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

