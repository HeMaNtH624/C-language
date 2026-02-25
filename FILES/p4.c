#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp=fopen(argv[1], "r");
	FILE *fd;
	int i;
	char op, ch;

	for(i=2; i<argc; i++)
	{
		if((fopen(argv[i], "r"))==NULL)
		{
			fd=fopen(argv[i], "w");
			while((ch=fgetc(fp))!=EOF)
				fputc(ch, fd);

			rewind(fp);
			fclose(fd);
		}
		else
		{
			printf("File already existed, do you want to truncate(y/n): ");
			scanf(" %c",&op);

			if(op=='y')
			{
				fd=fopen(argv[i], "w");
				while((ch=fgetc(fp))!=EOF)
					fputc(ch, fd);
				rewind(fp);
				fclose(fd);
			}
		}
	}
}
