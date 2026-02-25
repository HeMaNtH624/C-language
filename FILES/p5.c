#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp=fopen(argv[1], "r+");
	char ch;
	ch=fgetc(fp);
	if(ch>='a' && ch<='z')
	{
		fseek(fp, -1, 1);
		ch=ch^32;
		fputc(ch,fp);
	}
	rewind(fp);

	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ' || ch=='\n')
		{
			ch=fgetc(fp);
			if(ch>='a' && ch<='z')
			{
				ch=ch^32;
				fseek(fp, -1, 1);
				fputc(ch, fp);
			}
		}
	}
}
