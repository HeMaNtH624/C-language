#include<stdio.h>
int main()
{
	int i, j, k, n, l;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		k=i+1;
		l=n-1;
		for(j=0; j<=i; j++)
		{
			printf("%d ",k);
			k=k+l;
			l--;
		}
		printf("\n");

	}

}
