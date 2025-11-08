#include<stdio.h>
int main()
{
	int num, i, j;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(i=31; i>=0; i--)
		printf("%d",(num>>i)&1);

	for(i=0; i<=31; i++)
	{
		if(i%2==0)
			num = num | (1<<i);

		else
		{
			if((num>>i)&1!=0)
			{
				num = num ^ (1<<i);
			}
		}
	}

	printf("\n");
	printf("num: %d",num);
	printf("\n");

	for(i=31; i>=0; i--)
		printf("%d",(num>>i)&1);

	printf("\n");
}
