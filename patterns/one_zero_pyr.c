#include<stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		for(j=0 ;j<=i; j++)
		{
			if(j%2==0) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}
}
