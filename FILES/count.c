#include<stdio.h>
int main()
{
	FILE *fp=fopen("data.txt","r");
	int ch=0, count=0, line=0, big=0, len=0;
	char c;
	while((c=fgetc(fp))!=EOF)
	{
		ch++;
		count++;
		if(c=='\n')
		{
			line++;
			if(count>len)
			{
				big=line;
				len=count;
			}
			count=0;
		}
			
	}

	printf("Number of characters: %d\n",ch);
	printf("number of lines: %d\n", line);
	printf("biggest line: %d\n",big);
	printf("Line length: %d\n", len);
}
