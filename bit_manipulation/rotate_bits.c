#include<stdio.h>
int main()
{
	int num,res, lr, n;
 	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=31; i>=0; i--)
	{
		printf("%d",(num>>i)&1);
	}
	
 	printf("\n");
	printf("Enter number of bits to rotate: ");
	scanf("%d",&n);

	printf("Enter (1)Left rotation or (2)Right rotation: ");
	scanf("%d",&lr);

	if(lr==1)
	{
		res = (num<<n) | (num>>(32-n));
	}
 
	else if(lr==2)
	{
		res = (num>>n) | (num<<(32-n));
	}

	else 
	{
		printf("Invalid input\n");
		return 0;
	}

	for(int i=31; i>=0; i--)
	{
		printf("%d",(res>>i)&1);
	}
	printf("\n");
	printf("Number after rotating: %d",res);
	printf("\n");
}

