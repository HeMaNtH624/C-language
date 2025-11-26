#include<stdio.h>
int fun(int * a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[4] = {10, 20, 30, 40};
	fun(a, 4);
	printf("\n");
}
