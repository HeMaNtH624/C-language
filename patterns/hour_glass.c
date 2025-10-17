#include<stdio.h>
int main()
{
	int i, j, s, n, l;
	char ch = 'A';
	printf("Enter the height: ");
	scanf("%d",&n);

	n=n/2;

	for(i=-n; i<=n; i++)
	{
		if(i<0) l=-i;
		else l=i;
		for(s=0; s<n-l; s++)
		{
			printf(" ");
		}	
		for(j=0; j<n-s+1; j++)
		{
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}
