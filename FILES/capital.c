#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt", "r+");
	char ch;
	while((ch = fgetc(fp))!=EOF)
	{
		if(ch==' ' || ch=='\n')
		{
			
		}
	}
}
