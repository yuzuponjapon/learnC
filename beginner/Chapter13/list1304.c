#include <time.h>
#include <stdio.h>

void zenkai(void)
{
	FILE *fp;
	if((fp = fopen("test2.dat","r")) == NULL) 
		printf("初めてですね。\n");	
	else {
		int y,mon,d,h,m,s;
		fscanf(fp,"%d%d%d%d%d%d",&y,&mon,&d,&h,&m,&s);
		printf("前回の使用は%d年%d月%d日%d時%d分%d秒でした。\n",	
			y,mon,d,h,m,s);
	}
}

void kakikomi(void)
{
	FILE *fp;
	time_t current_time = time(NULL);
	struct tm *t = localtime(&current_time);

	if((fp = fopen("test2.dat","w")) == NULL)
		printf("open err\n");
	else {
		fprintf(fp,"%d %d %d %d %d %d\n",
			t->tm_year + 1900,
			t->tm_mon + 1,
			t->tm_mday,
			t->tm_hour,
			t->tm_min,
			t->tm_sec );
		fclose(fp);
	}
}

int main(void)
{

/* 前回時刻表示 */
	zenkai();


/* 現在日時書込み */
	kakikomi();

	return 0;
}
