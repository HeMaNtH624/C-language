#include<stdio.h>
int main()
{
	int i, j, n, s;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		for(s=0; s<i+1; s++)
		{
			printf(" ");
		}
		for(j=0; j<n-i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
