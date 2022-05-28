#include <stdio.h>


void judge(const char s[], const int no[], int *hit, int *blow)
{

	int i,j;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(s[i] == '0' + no[j]) {
				if(i == j)
					(*hit)++;
				else
					(*blow)++;
			}
		}
	}
}



int main(void) 
{

	int hit;
	int blow;

	char human[] = "02223";
	int compno[] = {1,2,3,4};

	judge(human,compno, &hit, &blow);

	printf("hit = %d  blow = %d\n", hit, blow);

	return 0;
}					
