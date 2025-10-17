#include<stdio.h>
int main()
{
	int i, j, n, s, l;
	char ch='A';
	printf("Enter the height: ");
	scanf("%d",&n);

	n=n/2;

	for(i=-n; i<=n; i++)
	{
		if(i<0) l=-i;
		else l=i;

		for(s=0; s<l; s++)
		{
			printf("  ");
		}
		for(j=0; j<2*(n-l)+1; j++)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
