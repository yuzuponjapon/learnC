#include <stdio.h>
#include <time.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);

	if(( fp = fopen( "dt_dat", "w")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		fprintf( fp, "%d年 %d月 %d日 %d時 %d分 %d秒\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,		   timer->tm_min,     timer->tm_sec  );
		fclose(fp);
	}

	return 0;
}
