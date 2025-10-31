#include<stdio.h>
int main()
{
	char s[] = "vector  india  chennai";
	int i, j, n, k, index, space = 0;
	for(n=0; s[n]; n++);

	
	for(i=0; s[i]; i++)
	{
		
		if(s[i] == ' ')
		{
			index = i;

			for(j=index; s[j]; j++)
			{
				s[j] = s[j+1];
			}
			i--;
			printf("%d\n",i);
		}
	}

	printf("%s\n",s);
}

