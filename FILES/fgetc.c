#include<stdio.h>
int main(int argc, char * argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char ch;
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	printf("\n");
}
