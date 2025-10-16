#include<stdio.h>
int main()
{
	int num, k=2;
	printf("Enter tnumber: ");
	scanf("%d",&num);

	short int *p = (short int*)&num;

	p++;
	for(k=2; k>0; k--)
	{
	for(int i=15; i>=0; i--)
	{
		printf("%d",((*p)>>i)&1);
	}
	p--;
	}
	printf("\n");
}
