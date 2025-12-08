#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = (char *)malloc(4*sizeof(char));
	int i;	

	if(p==NULL)
	{
		printf("Memory allocation failed\n");
		return 0;
	}
	
	printf("Enter 4 characters\n");
	for(i=0; i<4; i++)
	{
		scanf("%c",&p[i]);
	}

	for(i=0; i<4; i++)
		printf("%c ",p[i]);

	printf("\n");

	free(p);

	p=NULL;

}
