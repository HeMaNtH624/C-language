#include<stdio.h>
int main()
{
	int num, count, op;
	do
	{
		count=0;
		printf("Enter the number: ");
		scanf("%d",&num);
		for(int i=31; i>=0;i--)
		{
			if(((num>>i)&1)==1)
				count++;
		}
		if(count==1) printf("Power of 2\n");
		else printf("Not a power of 2\n");

		printf("Do you want to check again: ");
		scanf("%d",&op);

	}
	while(op==1);
}

