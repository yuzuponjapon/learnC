#include <stdio.h>


#define VMAX = 21;

typedef struct {
	char	name[20];
	int		height;
	double	vision;
} PhysCheck;

























int main(void)
{
	int i;

	PhysCheck x[] = {
		{"AKASAKA Tadao",	162, 0.3},
		{"KATOH Tomiaki",	173, 0.7},
		{"SAITOH Syouji",	175, 2.0},
		{"TAKEDA Shinya",	171, 1.5},
		{"NAGAHAMA Masaki",	168, 0.4},
		{"HAMADA Tetsuaki",	174, 1.2},
		{"MATSUTOMI Akio",	169, 0.8},
	};

	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];

	printf("■□■　身体検査一覧表  ■□■\n");
	pirntf("  氏名　　　　　　 身長 視力\n");
	printf("------------------------------\n");

	for(i = 0; i < nx; i++) {
	printf("%



