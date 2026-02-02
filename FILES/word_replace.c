#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	int count=0, i=0, j;
	char ch;

	while((fgetc(fp))!=EOF)
		count++;

	char *buf = (char *)malloc(count*sizeof(char)+1);

	rewind(fp);
	
	while((ch=fgetc(fp))!=EOF)
	{
		buf[i++] = ch;
	}
	buf[i] = '\0';

	fp = fopen(argv[1], "w");
	i=0;
	char *stop;
	while((stop=strstr(buf+i, argv[2]))!=NULL) 
	{      	printf("%p\n",stop);   
	 	for(j=stop-buf; i<j; i++)
		{		
			//printf("%d\n",i);
			fputc(buf[i], fp);
		}
		fprintf(fp, "%s", argv[3]);
		i=i+strlen(argv[2]);
	}
	for(; buf[i]; i++)
		fputc(buf[i], fp);
}
