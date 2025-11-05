#include<stdio.h>
int main()
{
        char s[20];
        int i, j, k;

        printf("Enter the string: ");
        scanf("%[^\n]",s);

	for(i=0; s[i]; i++)
	{
		for(j=i+1; s[j]; j++)
		{
			if(s[i] == s[j])
			{	for(k=j; s[k]; k++)
				s[k] = s[k+1]; 
				j--;
			}
			
		}
	}
	printf("s=%s\n",s);

        /*for(i=0; s[i]; i++)
        {
                for(j=0; j<i; j++)
                {
                        if(s[i] == s[j]) 
				break;
		}

                if(i == j)
		{
			for(j=i+1; s[j]; j++)
			{
				if(s[i] == s[j])
				{	for(k=j; s[k]; k++)
						s[k] = s[k+1];
						j--;
				}
			}
		}
        
	}
	printf("s=%s\n",s);*/


}

