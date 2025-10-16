#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			printf("* ");

		}
		printf("\n");
	}
}
