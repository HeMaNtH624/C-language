#include<stdio.h>
int main(int argc, char *argv[])
{
	int k=remove(argv[1]);
	if(k==0)
		printf("File got removed\n");

	printf("%d\n", k);
}
