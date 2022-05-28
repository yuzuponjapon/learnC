#include<stdio.h>

int main(void)
{
	int data;
	int *ptr;

	data = 5;

	printf("整数型の変数dataの値= %d\n",data);
	printf("整数型の変数dataのアドレス= %08X\n",&data);

	ptr = &data;

	printf("ポインタ型の変数ptr = %08X\n",ptr);
	printf("ptrが指す場所に保存されている値= %d\n",*ptr);

	return(0);
}
