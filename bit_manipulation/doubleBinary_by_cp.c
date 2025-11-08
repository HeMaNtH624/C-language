#include<stdio.h>
int main()
{
	int i, j;
	double num;
	printf("Enter the number: ");
	scanf("%lf",&num);

	char *p = (char *)&num;
	for(j=7; j>=0; j--)
	{
	for(i=7; i>=0; i--)
	{
		printf("%d", (*(p+j)>>i)&1);
	}
	}
	printf("\n");
}
