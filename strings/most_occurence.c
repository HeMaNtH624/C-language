#include<stdio.h>
int main()
{
	char s[20], ch;
	printf("Enter rhe string: ");
	scanf("%[^\n]",s);

	int count, max = 0, i, j;

	for(i=0; s[i]; i++)
	{
		count = 1;
		for(j=0; j<i; j++)
		{
			if(s[i] == s[j])
				break;
		}

		if(i==j)
		{
			for(j=i+1; s[j]; j++)
			{
				if(s[i] == s[j])
					count++;
			}

			if(count>max)
			{
				max = count;
				ch = s[i];
			}
		}
	}

	printf("most occurence element is\n%c for %d times\n",ch, max);

}
