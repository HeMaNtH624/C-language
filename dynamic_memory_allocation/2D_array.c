#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, r, c;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&r,&c);
	int **p = (int **)malloc(r*sizeof(int *));
	
	for(i=0; i<r; i++)
		p[i] = (int *)malloc(c*sizeof(int));
	
	printf("Enter %d elemnts into 1D arrays:",r*c);

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			scanf("%d",&p[i][j]);
	}

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}

	for(i=0; i<r; i++)
		free(p[i]);
	free(p);

}
