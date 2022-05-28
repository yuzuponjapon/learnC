#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t t = time(NULL);
	struct tm *timer = localtime(&t);
	char *wday[] = {"日","月","火","水","木","金","土"};

	if( (fp = fopen("test.dat","w")) == NULL)
		printf("open err\n");
	else {
		fprintf( fp, "現在の日時は %d年%d月%d日(%s)%d時%d分%d秒です。\n",
			timer->tm_year + 1900,
			timer->tm_mon + 1,	
			timer->tm_mday,
			wday[timer->tm_wday],
			timer->tm_hour,
			timer->tm_min,
			timer->tm_sec );

		fclose(fp);
	
	}

	return 0;
}
