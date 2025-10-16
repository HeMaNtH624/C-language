#include<stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		if(i%2==0) k=1;
		else k=2;
		for(j=0; j<=i; j++)
		{
			printf("%d ", k);
			k=k+2;
		}
		printf("\n");
	}
 
}
