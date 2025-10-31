#include<stdio.h>
int main()
{
	int i, j, n, k, s;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		for(s=0; s<n-1; s++)
		{
			if(i<n-1)
				printf("  ");
		}

		for(j=0; j<n-s; j++)
		{
			if(i>=n-1)
			{
				for(k=0; k<n; k++)
					printf("* ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
}
