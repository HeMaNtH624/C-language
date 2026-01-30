#include<stdio.h>
void fun(int, int, int (*)[]);
int main()
{
	int a[2][3] = {{10,20,30},{30, 40, 50}};
	int r = sizeof a/sizeof a[0];
	int c = sizeof a[0]/sizeof a[0][0];
	fun(r, c, a);
}

void fun(int r, int c, int (*a)[3])
{
	int i=0, j=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
