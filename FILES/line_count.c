#include<stdio.h>
int main()
{
	FILE * fp = fopen("data.txt","r");
	int ch=0, count=0, line=0, big_line=0, line_len=0;
	char s;
	while((s=fgetc(fp))!=EOF)
	{
		ch++;
		count++;
		if(s == '\n')
		{
			line++;
			if(count>line_len)
			{
				line_len=count;
				big_line = line;
			}
			count=0;
		}
		
	}

	printf("Total number of characters: %d\n", ch);
	printf("Total number of lines: %d\n", line);
	printf("Big line is: %d\n",big_line);
	printf("Big line length is: %d\n", line_len);

}
