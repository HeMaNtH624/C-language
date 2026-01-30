#include<stdio.h>
int main(int argc, char * argv[])
{
	FILE * fs = fopen(argv[1], "r");
	FILE * fd = fopen(argv[2], "w+");
	FILE * fp = fopen(argv[3], "w");
	char ch, s;
	while((ch=fgetc(fs))!=EOF)
		fputc(ch, fd);
		
	rewind(fd);
	while((s=fgetc(fd))!=EOF)
		fputc(s,fp);
	printf("\n");
}
