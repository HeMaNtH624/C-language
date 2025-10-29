#include<stdio.h>
int main()
{
	char s[30], temp;
	int i, j, st = 0, en, k;


	printf("Enter the string: ");
	scanf("%[^\n]",s);

	for(k = 0; s[k]; k++);

	for(i=0; i<=k; i++)
	{
		if(s[i] == ' ' || s[i] == '\0')
		{
			en = i-1;
			for(j=st; st<en; st++)
			{
				temp = s[st];
				s[st] = s[en];
				s[en] = temp;
				en--;			
			}
		st = i+1;	
			
		}
	}

	printf("%s\n", s);
}

//input: vector india institute
//output: rotcev aidni etutitsni
