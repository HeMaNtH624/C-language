#include<stdio.h>
int main()
{
	int i, j, a[2][3] = {{10, 20, 30},{40, 50, 60}};
	int (*p)[3] = a;

	for(int i=0; i<2; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
