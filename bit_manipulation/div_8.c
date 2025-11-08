#include<stdio.h>
int main()
{
	int num, op;
	do
	{
		printf("Enter the number: ");
		scanf("%d",&num);

		if((num&7)==0 && num>0) printf("Divisible by 8\n");
		else printf("Not divisible by 8\n");

		printf("Do you want to check another number: ");
		scanf("%d",&op);
	}
	while(op==1);
}

