#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE * fs = fopen(argv[1], "r");
	if(fs == NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}

	FILE *fd = fopen(argv[2], "w");
	char ch;
	while((ch=fgetc(fs))!=EOF)
	{
		fputc(ch, fd);
	}
	remove(argv[1]);

}
