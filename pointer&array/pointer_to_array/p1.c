#include<stdio.h>
int main()
{
	int i = 0;
	int a[] = {10, 20, 30, 40, 50, 60};
	int *p = a;
	int (*q)[6] = a;

	for(i=0; i< 6; i++)
		printf("%d ", p[i]);
		printf("\n");
	for(i=0; i<6; i++)
		printf("%d ",(*q)[i]);
	printf("\n");
}
