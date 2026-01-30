#include<stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter the rows: ");
	scanf("%d", &n);
	k=1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d ",k++);
			
	
		}
		printf("\n");
	}
}
