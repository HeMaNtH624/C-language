//first 100 prime numbers ending with 3

#include<stdio.h>
int main()
{
	int num, count=0, i;
	for(num=1; count<100; num++)
	{
		for(i=2; i<=num/2; i++)
		{
			if(num%i==0)
				break;
		}
		if(i==num/2+1)
			count++;

		if(num%10==3)
			printf("%d ",num);
	}
	printf("\n");
}
