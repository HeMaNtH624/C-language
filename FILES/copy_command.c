#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE * fs = fopen(argv[1], "r");
	FILE *fd;
	if(fs==NULL)
	{
		printf("file doesn't exist\n");
	}
	int i;
	char ch;

	for(i=2; i<argc; i++)
	{
		fd = fopen(argv[i], "w");
		while((ch=fgetc(fs))!=EOF)
			fputc(ch, fd);
		rewind(fs);
	}
	fclose(fd);
	fclose(fs);
	
}
