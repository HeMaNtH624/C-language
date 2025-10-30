#include<stdio.h>
int main()
{
	char s[20];
	printf("Enter the string: ");
	scanf("%[^\n]",s);
	int i,j, count;

	for(i=0; s[i]; i++)
	{
		count = 1;
		for(j=0; j<i; j++)
		{
			if(s[i] == s[j])
				break;
		}

		if(i == j){
			for(j = i+1; s[j]; j++)
			{
				if(s[i] == s[j])
						count++;
			}

			printf("%c ---> %d\n",s[i], count);
		}
	}
	
}
