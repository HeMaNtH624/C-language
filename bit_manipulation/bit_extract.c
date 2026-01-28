//Extract n number of bits from position p
#include<stdio.h>
int main() 
{
	int num, pos, n, res;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=31; i>=0; i--)
	{
		printf("%d",(num>>i)&1);
	}

	printf("\n");

	printf("Enter position: ");
	scanf("%d",&pos);

	printf("Enter no of bits to extract: ");
	scanf("%d",&n);

	res = (num>>pos) & ((1<<n)-1);

	for(int i=n-1; i>=0; i--)
	{
		printf("%d",(res>>i)&1);
	}
	
	printf("\n");
	printf("Extracted number: %d",res);
	printf("\n");
}
