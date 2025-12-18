#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r+");
	char ch, s;
	s = fgetc(fp);
	fseek(fp, -1, 1);
	if(s>='a' && s<'z')
	{
		s = s^32;
		fputc(s,fp);
		rewind(fp);
	}
	while((ch = fgetc(fp))!=EOF)
	{
		if((ch==' ' || ch =='\n'))
		{
			ch=fgetc(fp);
			if(ch>='a' && ch<='z')
			{
				fseek(fp, -1, 1); 
				ch=ch^32;	
				fputc(ch,fp);
			}			
		}
		
	}
}

