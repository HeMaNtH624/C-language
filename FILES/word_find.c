#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	if(argc<2)
	{
		printf("usage: ./a.out file_name word\n");
		return 0;
	}
	FILE *fp=fopen(argv[1], "r");
	int ch=0, word=0, i=0, j;
	while((fgetc(fp))!=EOF)
		ch++;

	char *buf=(char *)malloc(ch*sizeof(char)+1);
	rewind(fp);
	char s;
	while((s=fgetc(fp))!=EOF)
		buf[i++]=s;
	buf[i]='\0';

	i=0;
	char *ptr=buf;
	while((ptr=strstr(ptr,argv[2]))!=NULL)
	{
			word++;
		ptr=ptr+strlen(argv[2]);
	}
	printf("%d\n", word);
	printf("%d\n", ch);
}
