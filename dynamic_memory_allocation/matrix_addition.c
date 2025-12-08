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
	int i, j, r=3, c=3;
	int **a = (int **)malloc(r*sizeof(int *));
	for(i=0; i<r; i++)
		a[i] = (int *)malloc(c*sizeof(int));

	int **b = (int **)malloc(r*sizeof(int *));
	for(i=0; i<r; i++)
		b[i] = (int *)malloc(c*sizeof(int));

	int **d = (int **)malloc(r*sizeof(int *));
	for(i=0; i<r; i++)
		d[i] = (int *)malloc(c*sizeof(int));
	
	printf("Enter array 1 elements:\n");
	scan_array(r, c, a);

	printf("Enter array 2 elements:\n");
	scan_array(r, c, b);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			d[i][j] = a[i][j] + b[i][j]; 
		}
	}

	printf("\n");
	print_array(r,c,a);
	printf("\n");
	print_array(r,c,b);
	printf("\n");
	print_array(r,c,d);
	

}
