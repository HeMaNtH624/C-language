#include<stdio.h>
int main()
{
	int i, j, s, n;
	char ch = 'A';
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		ch = 'A';
		for(s=0; s<n-i-1; s++)
		{
			printf("  ");
		}
		for(j=0; j<2*i+1; j++)
		{
			if(j%2==0)
				printf("%c ",ch++);
			else 
				printf("* ");
		}
		printf("\n");
	}
}
