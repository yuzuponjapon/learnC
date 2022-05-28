#include <stdio.h>
#include <time.h>



int main(void)
{


	FILE *fp;
	char file_name[FILENAME_MAX];	

	time_t current = time(NULL);
	struct tm *t = localtime(&current);
printf("書込みデータ　%d:%d:%d\n",t->tm_hour,t->tm_min,t->tm_sec);

	printf("file name >");
	scanf("%s",&file_name);


	if((fp = fopen(file_name,"wb")) == NULL)
		printf("file open error\n");
	else {
		fwrite(t,sizeof(int),1,fp);
		fclose(fp);
	}

	current = time(NULL);
	t = localtime(&current);
printf("更新データ  　%d:%d:%d\n",t->tm_hour,t->tm_min,t->tm_sec);

	if((fp = fopen(file_name,"rb")) == NULL)
		printf("file rb open error\n");
	else {
		fread(t,sizeof(int),1,fp);
		fclose(fp);
	}


	current = time(NULL);
	t = localtime(&current);
printf("読込データ  　%d:%d:%d\n",t->tm_hour,t->tm_min,t->tm_sec);
	
	return 0;
}	
