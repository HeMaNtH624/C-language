#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;

	FILE *fp = fopen(argv[1], "r");

	FILE *fd;

	char ch, y;

	for(i=2; i<argc; i++)
	{
		if((fopen(argv[i], "r"))==NULL)
		{
			fd = fopen(argv[i], "w");
			while((ch = fgetc(fp))!=EOF)
					fputc(ch, fd);
			fclose(fd);
			rewind(fp);
		}
		
		else
		{
			printf("File already existed, if you want to truncate enter Y\n");
			scanf("%c",&y);

			if(y=='Y')
			{
				fd = fopen(argv[i], "w");
				while((ch = fgetc(fp))!=EOF)
						fputc(ch, fd);
				fclose(fd);
				rewind(fp);
			}
		}
	
	}
}
