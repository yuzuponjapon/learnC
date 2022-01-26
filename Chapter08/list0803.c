#include <stdio.h>

/***  #define puts_alert(str)  { putchar('\a');puts(str); }　（修正３） ***/
#define puts_alert(str)  ( putchar('\a'),puts(str) )


int main(void)
{
	int n;
	printf("整数入力　＞");
	scanf("%d",&n);

	if (n)
/***	puts_alert("ゼロではない");    （修正１）;のせいで空文ができる　 ***/
/***	puts_alert("ゼロではない")     （修正２）この変更でも正常に動いた   ***/
		puts_alert("ゼロではない");     /***（修正３）***/	
	else
		puts_alert("ゼロです");

	return 0;
}

