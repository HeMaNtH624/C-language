#include<stdio.h>
int main()
{
	int num, i, j;
	printf("Enter the number: ");
	scanf("%d",&num);

	char *p = (char *)&num;

	for(i=3; i>=0; i--)
	{
		for(j=7; j>=0; j--)
		{
			printf("%d",((*(p+i))>>j)&1);
		}
	}
	printf("\n");
}
