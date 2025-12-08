#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *p;
	p = (int *)malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed\n");
		return 0;
	}

	for(i=0; i<5; i++)
		scanf("%d",&p[i]);

	for(i=0; i<5; i++)
		printf("%d ",p[i]);
	printf("\n");
}
