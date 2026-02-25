#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	int *p = &num;

	for(int i=31; i>=0; i--)
	{
		printf("%d",((*p)>>i)&1);
	}
	printf("\n");
}
