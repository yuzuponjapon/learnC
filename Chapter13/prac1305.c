#include <time.h>
#include <stdio.h>

char file_name[] = "test3.dat";

void zenkai(void)
{
	FILE *fp;

	if( (fp = fopen(file_name,"r")) == NULL)
		printf("初めての使用\n");
	else {
		int y,mon,d,h,m,s;
		char kibun[20];

		fscanf(fp,"%d%d%d%d%d%d%s",&y,&mon,&d,&h,&m,&s,&kibun);
		printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は\"%s\"でした。\n",
			y,mon,d,h,m,s,kibun);			
		fclose(fp);
	}
}

void kakikomi(void)
{
	FILE *fp;
	char kibun[20];

	time_t c_time = time(NULL);
	struct tm *t = localtime(&c_time);

	printf("今の気分は？");
	scanf("%s",kibun);

	if( (fp = fopen(file_name,"w")) == NULL )
		printf("open err\n");
	else {
		fprintf(fp,"%d %d %d %d %d %d %s\n",
			t->tm_year + 1900,
			t->tm_mon + 1,
			t->tm_mday,
			t->tm_hour,
			t->tm_min,
			t->tm_sec,
			kibun );
	
		fclose(fp);
	}
}


int main(void)
{
	zenkai();

	kakikomi();

	return 0;
}
