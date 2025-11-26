#include<stdio.h>
int main()
{
	int a[] = {10, 20, 30, 40, 50};
	int *p[2] = {a+3, a+2};
	int i;
	for(i=0; i<2; i++)
	{
		printf("%p ", p[i]);
	}	
	printf("\n");
}
