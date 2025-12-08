#include<stdio.h>
#include<stdlib.h>

void scan_array(int r, int c, int **p)
{
	int i, j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			scanf("%d",&p[i][j]);
	}
}

void print_array(int r, int c, int **p)
{
	int i, j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}

int main()
{
	int i, j, k, r = 3, c = 3;

	int **a = (int **)calloc(r,sizeof(int *));
	for(i=0; i<r; i++)
		a[i] = (int *)calloc(c,sizeof(int));

	int **b = (int **)calloc(r,sizeof(int *));
	for(i=0; i<r; i++)
		b[i] = (int *)calloc(c,sizeof(int));

	int **d = (int **)calloc(r,sizeof(int *));
	for(i=0; i<r; i++)
		d[i] = (int *)calloc(c,sizeof(int));

	
	printf("Enter the first array elements:\n");
	scan_array(r, c, a);
	printf("Enter the second array elements:\n");
	scan_array(r, c, b);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			d[i][j] = 0;
			for(k=0; k<c; k++)
			{
				d[i][j]+= a[i][k]*b[k][j];
			}
		}
	}

	printf("\n");
	print_array(r, c, a);
	printf("\n");
	print_array(r, c, b);
	printf("\n");
	print_array(r, c, d);
}
