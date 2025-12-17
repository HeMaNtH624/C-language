#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "w");
	char ch[] = "Hello India";
	for(int i=0; ch[i]; i++)
	{
		fputc(ch[i], fp);
	}
}
