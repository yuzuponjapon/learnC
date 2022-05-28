#include <stdio.h>

void puts_str(const char s[][8],int n)
{
	int i;
	for(i = 0;i < n;i++) {
		int j = 0;
		pritnf("s[%d] = \"",i);
		while( s[i][j] )
			putchar(s[i][j++]);
		puts("\"");
	}

}

int main(void)
{
	char cs[][8] = {"katsumi","sanae","tatsuua"};

	puts_str(cs,3);

	return 0;
}
