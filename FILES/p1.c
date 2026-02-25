#include<stdio.h>
int main()
{
	char ch;
	FILE *fp=fopen("data.txt","w+");
	while((ch=getchar())!=EOF)
		fputc(ch, fp);

	rewind(fp);
	while((ch=fgetc(fp))!=-1)
		printf("%c",ch);

	printf("\n");

}
