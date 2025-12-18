#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fs = fopen(argv[1], "r");
	FILE *fd = fopen(argv[2], "w");
		
	char a[200];

	while((fgets(a, 10, fs))!=NULL)
		fputs(a, fd);

	fclose(fs);
	fclose(fd);
}
