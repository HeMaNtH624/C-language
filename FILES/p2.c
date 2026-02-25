#include<stdio.h>
int main(int argc, char *argv[])
{
	char ch;
	int i;
	FILE *fs=fopen(argv[1], "r");

	for(i=2; i<argc; i++)
	{
		FILE *fd=fopen(argv[i], "w");
		while((ch=fgetc(fs))!=EOF)
			fputc(ch, fd);
		rewind(fs);
		fclose(fd);
	}
}
