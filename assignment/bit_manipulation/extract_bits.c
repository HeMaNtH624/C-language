#include<stdio.h>
int main()
{
	int num, count=0, pos, no;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=31; i>=0; i--)
	{
		printf("%d",(num>>i)&1);
	}
	printf("\n");

	printf("Enter position and number of bits: ");
	scanf("%d%d",&pos,&no);

	num=num>>(pos-1);

	for(int i=30; i>=0; i--)
	{
		count++;
		if(count>=(32-no))
			printf("%d",(num>>i)&1);
	}
	printf("\n");

}
